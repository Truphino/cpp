/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 12:31:34 by trecomps          #+#    #+#             */
/*   Updated: 2018/04/06 12:58:12 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

Zombie::Zombie(void) : _name(""), _type("")
{
	//std::cout << "Default constructor called" << std::endl;

	return ;
}

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
{
	//std::cout << "Parametric constructor called" << std::endl;

	return ;
}

Zombie::Zombie(Zombie const &src)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return ;
}

Zombie::~Zombie(void)
{
	//std::cout << "Destructor called" << std::endl;
	std::cout << this->_name << " is dead, forever :(" << std::endl;

	return ;
}

std::string		Zombie::get_name(void) const
{
	return (this->_name);
}

std::string		Zombie::get_type(void) const
{
	return (this->_type);
}

Zombie			&Zombie::operator=(Zombie const &rhs)
{
	//std::cout << "Assignement operator called" << std::endl;

	if (this != &rhs)
	{
		this->_name = rhs.get_name();
		this->_type = rhs.get_type();
	}
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Zombie const &i)
{
	o << "Name :" << i.get_name();

	return (o);
}

void			Zombie::announce(void) const
{
	std::cout << "<" << this->_name << " "
		<< "(" << this->_type << ")"
		"> Braiiiinnnnnnsssss !!!" << std::endl;
}
