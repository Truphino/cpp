/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 12:55:24 by trecomps          #+#    #+#             */
/*   Updated: 2017/03/27 13:21:57 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.class.hpp"

Victim::Victim(void) : _name("Smith")
{
	std::cout << "Some random victim called " << this->_name << " just popped !"
		<< std::endl;

	return ;
}

Victim::Victim(std::string const n) : _name(n)
{
	std::cout << "Some random victim called " << this->_name << " just popped !"
		<< std::endl;

	return ;
}

Victim::Victim(Victim const &src)
{
	*this = src;
	std::cout << "Some random victim called " << this->_name << " just popped !"
		<< std::endl;

	return ;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << this->_name
		<< " just died for no apparent reason !" << std::endl;

	return ;
}

std::string			Victim::get_name(void) const
{
	return (this->_name);
}

void				Victim::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a cute little sheep !"
		<< std::endl;
}

Victim		&Victim::operator=(Victim const &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs.get_name();
	}
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Victim const &i)
{
	o << "I'm " << i.get_name() << " and I like otters !" << std::endl;

	return (o);
}
