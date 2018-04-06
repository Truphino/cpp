/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 14:06:42 by trecomps          #+#    #+#             */
/*   Updated: 2018/04/06 14:34:32 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.class.hpp"

const std::string		ZombieEvent::_name_table[5] = {
									"Eugene",
									"Abraham",
									"Roseta",
									"Paul",
									"Orphan"
									};

ZombieEvent::ZombieEvent(void) : _type("Not dead at all")
{
	//std::cout << "Default constructor called" << std::endl;

	return ;
}

ZombieEvent::ZombieEvent(std::string const type) : _type(type)
{
	//std::cout << "Parametric constructor called" << std::endl;

	return ;
}

ZombieEvent::ZombieEvent(ZombieEvent const &src)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return ;
}

ZombieEvent::~ZombieEvent(void)
{
	//std::cout << "Destructor called" << std::endl;
	
	return ;
}

std::string		ZombieEvent::get_type(void) const
{
	return (this->_type);
}

ZombieEvent		&ZombieEvent::operator=(ZombieEvent const &rhs)
{
	//std::cout << "Assignement operator called" << std::endl;

	if (this != &rhs)
	{
		this->_type = rhs.get_type();
	}
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, ZombieEvent const &i)
{
	o << "Event type is:" << i.get_type();

	return (o);
}

void			ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

Zombie			*ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, this->_type));
}

void			ZombieEvent::randomChump(void) const
{
	Zombie		zomb(this->_name_table[rand() % 5], this->_type);
	
	zomb.announce();
}
