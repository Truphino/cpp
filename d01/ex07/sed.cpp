/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 08:51:46 by trecomps          #+#    #+#             */
/*   Updated: 2018/04/07 09:29:28 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

void		sed(std::vector<std::string> all_args)
{
	std::ifstream	read;
	std::ofstream	out_file(all_args[0] + ".replace");
	std::string		line;
	std::size_t		found;
	std::string		replace;

	read.open(all_args[0], std::fstream::in);
	if (read.is_open())
	{
		while (getline(read, line))
		{
			found = line.find(all_args[1]);
			while (found != std::string::npos)
			{
				line.replace(found, all_args[1].length(), all_args[2]);
				found = line.find(all_args[1]);
			}
			out_file << line << std::endl;
		}
	}
	else
		std::cout << "Can't open " << all_args[0] << std::endl;
}

int			main(int argc, char **argv)
{
	std::vector<std::string>			all_args;
	std::vector<std::string>::iterator	it;

	if (argc == 4)
	{
		all_args.assign(argv + 1, argc + argv);
		for (it = all_args.begin(); it != all_args.end(); ++it)
		{
			if (it->empty())
				exit(1);
		}
		sed(all_args);
	}
	else
		std::cout << "Usage : ./no_loser_sed filename search replace"
			<< std::endl;
}
