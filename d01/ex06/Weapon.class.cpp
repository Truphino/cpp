/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 17:28:00 by trecomps          #+#    #+#             */
/*   Updated: 2018/04/06 17:37:12 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.class.hpp"

Weapon::Weapon(void) : _type("")
{
	//std::cout << "Default constructor called" << std::endl;

	return ;
}

Weapon::Weapon(std::string const type) : _type(type)
{
	//std::cout << "Parametric constructor called" << std::endl;

	return ;
}

Weapon::Weapon(Weapon const &src)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return ;
}

Weapon::~Weapon(void)
{
	//std::cout << "Destructor called" << std::endl;
	
	return ;
}

const std::string	&Weapon::getType(void) const
{
	return (this->_type);
}

void		Weapon::setType(std::string type)
{
	this->_type = type;
}

Weapon		&Weapon::operator=(Weapon const &rhs)
{
	//std::cout << "Assignement operator called" << std::endl;

	if (this != &rhs)
	{
		this->_type = rhs.getType();
	}
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Weapon const &i)
{
	o << "Weapon Type: " << i.getType();

	return (o);
}
