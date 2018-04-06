/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 14:56:55 by                   #+#    #+#             */
/*   Updated: 2018/04/06 11:25:51 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

int			Contact::_num_contact = 0;

Contact::Contact(void)
{
	this->to_empty();

	return ;
}

Contact::~Contact(void)
{
	return ;
}

int			Contact::get_num_contact(void)
{
	return (Contact::_num_contact);
}

bool		Contact::is_empty(void) const
{
	return (this->_empty);
}

void		Contact::to_empty(void)
{
	this->_empty = true;

	return ;
}

void		Contact::print_contact(void) const
{
	std::cout << this->first_name << std::endl;
	std::cout << this->last_name << std::endl;
	std::cout << this->nickname << std::endl;
	std::cout << this->login << std::endl;
	std::cout << this->postal_adress << std::endl;
	std::cout << this->email_adress << std::endl;
	std::cout << this->phone_number << std::endl;
	std::cout << this->birthday_date << std::endl;
	std::cout << this->favorite_meal << std::endl;
	std::cout << this->underwear_color << std::endl;
	std::cout << this->darkest_secret << std::endl;
}

void		Contact::add(void)
{
	Contact::_num_contact += 1;
	std::cout << "Enter contact informations:";
	std::cout << std::endl << "First Name:\t";
	getline(std::cin, this->first_name);
	std::cout << "Last Name:\t";
	getline(std::cin, this->last_name);
	std::cout << "Nickname:\t";
	getline(std::cin, this->nickname);
	std::cout << "Login:\t\t";
	getline(std::cin, this->login);
	std::cout << "Postal adress:\t";
	getline(std::cin, this->postal_adress);
	std::cout << "Email adress:\t";
	getline(std::cin, this->email_adress);
	std::cout << "Phone number:\t";
	getline(std::cin, this->phone_number);
	std::cout << "Birthday date:\t";
	getline(std::cin, this->birthday_date);
	std::cout << "Favorite meal:\t";
	getline(std::cin, this->favorite_meal);
	std::cout << "Underwear color:";
	getline(std::cin, this->underwear_color);
	std::cout << "Darkest secret:\t";
	getline(std::cin, this->darkest_secret);
	return ;
}
