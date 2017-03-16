/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 14:57:48 by                   #+#    #+#             */
/*   Updated: 2017/03/13 19:16:53 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include "Contact.class.hpp"

void	line_separator(void)
{
	std::cout << "----------|----------|----------|----------|" << std::endl;
	return ;
}

void	print_format(std::string str)
{
	if (str.length() > 10)
		std::cout << str.substr(0, 9) << ".|";
	else
		std::cout << str << std::string(10 - str.length(), ' ') << "|";
}

void	print_info(Contact contact)
{
	print_format(contact.first_name);
	print_format(contact.last_name);
	print_format(contact.nickname);
	std::cout << std::endl;
}

void	add_contact(Contact contact[8])
{
	int	num;

	num = Contact::get_num_contact();
	if (num >= 8)
	{
		std::cout << "Contact list is full !" << std::endl;
		return ;
	}
	contact[num].add();
	std::cout << "Contact succesfully added" << std::endl;
}

void	search_contact(Contact contact[8])
{
	int				i;
	std::string		buf;

	i = 0;
	if (Contact::get_num_contact() == 0)
	{
		std::cout << "No contact to print." << std::endl;
		return ;
	}
	std::cout << "Index     |first name|last name |nickname  |" << std::endl;
	line_separator();
	while (i < Contact::get_num_contact())
	{
		std::cout << i << "         |";
		print_info(contact[i]);
		i++;
	}
	std::cout << "Enter a index:";
	std::cin >> buf;
	if (buf.length() == 1 && 48 <= buf[0] && buf[0] <= 57)
		i = buf[0] - 48;
	else
	 i = -1;
	if (0 <= i && i < Contact::get_num_contact())
		contact[i].print_contact();
	else
		std::cout << "Not a valid Index." << std::endl;
}

int		main(void)
{
	Contact			contact[8];
	char			buf[512];

	std::cout << "Please enter a command" << std::endl;
	while (1)
	{
		std::cin >> buf;
		if (std::string("EXIT").compare(buf) == 0)
			exit(0);
		else if (std::string("ADD").compare(buf) == 0)
			add_contact(contact);
		else if (std::string("SEARCH").compare(buf) == 0)
			search_contact(contact);
		else
			std::cout << "Alvailable command are: EXIT | ADD | SEARCH"
				<< std::endl;
	}
	return (0);
}
