/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 14:03:39 by                   #+#    #+#             */
/*   Updated: 2017/03/13 14:48:24 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void		print_upper_str(std::string str)
{
	size_t	j;
	char	to_print;

	j = 0;
	while (j < str.length())
	{
		to_print = str.at(j);
		if (97 <= str[j] && str[j] <= 122)
			to_print -= 32;
		std::cout << to_print;
		j++;
	}
}

int			main(int argc, char **argv)
{
	int				i;
	std::string		str;

	i = 1;
	if (argc == 1)
	{
		std::cout << "*LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (i < argc)
	{
		str = std::string(argv[i]);
		print_upper_str(str);
		i++;
	}
	std::cout << std::endl;
	return (0);
}
