/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 12:38:42 by trecomps          #+#    #+#             */
/*   Updated: 2017/03/27 13:07:56 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.class.hpp"

Sorcerer::Sorcerer(void)
{
	std::cout << "Default constructor called" << std::endl;

	return ;
}

Sorcerer::Sorcerer(std::string name, std::string title) :
						_name(name), _title(title)
{
	std::cout << this->_name << ", " << this->_title << ", is born !"
		<< std::endl;

	return ;
}

Sorcerer::Sorcerer(Sorcerer const &src)
{
	*this = src;
	std::cout << this->_name << ", " << this->_title << ", is born !"
		<< std::endl;

	return ;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << this->_name << ", " << this->_title << ", is dead."
		<< "Consequences will never be the same !" << std::endl;

	return ;
}

std::string		Sorcerer::get_name(void) const
{
	return (this->_name);
}

std::string		Sorcerer::get_title(void) const
{
	return (this->_title);
}

void			Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}

Sorcerer		&Sorcerer::operator=(Sorcerer const &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs.get_name();
		this->_title = rhs.get_title();
	}
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Sorcerer const &i)
{
	o << "I'm " << i.get_name() << ", " << i.get_title()
		<< ", and I like ponies !" << std::endl;

	return (o);
}
