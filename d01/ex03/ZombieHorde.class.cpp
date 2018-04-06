/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 15:19:31 by trecomps          #+#    #+#             */
/*   Updated: 2018/04/06 15:32:38 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ZombieHorde.class.hpp"

ZombieHorde::ZombieHorde(unsigned int const n) : _count(n)
{
	//std::cout << "Parametric constructor called" << std::endl;
	this->_members = new Zombie[n];

	return ;
}

ZombieHorde::~ZombieHorde(void)
{
	//std::cout << "Destructor called" << std::endl;
	delete[] this->_members;

	return ;
}

int			ZombieHorde::get_count(void) const
{
	return (this->_count);
}

ZombieHorde		&ZombieHorde::operator=(ZombieHorde const &rhs)
{
	//std::cout << "Assignement operator called" << std::endl;

	if (this != &rhs)
	{
		this->_count = rhs.get_count();
	}
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, ZombieHorde const &i)
{
	o << "The horde is able to eat " << i.get_count()
		<< " per seconds" << std::endl;

	return (o);
}

void			ZombieHorde::announce(void) const
{
	unsigned int			i;

	i = 0;
	while (i < this->_count)
	{
		this->_members[i].announce();
		i++;
	}
}
