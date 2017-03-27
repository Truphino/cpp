/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 10:37:26 by trecomps          #+#    #+#             */
/*   Updated: 2017/03/27 11:04:10 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "ClapTrap.class.hpp"

ClapTrap::ClapTrap(void) : _name("CL4P_TP"), _type("CL4P_TP"),
							_hit(100), _max_hit(100),
							_nrg(100), _max_nrg(100), _level(1), _melee(30),
							_ranged(20), _armor_reduction(5)
{
	std::cout << *this << " is born." << std::endl;

	return ;
}

ClapTrap::ClapTrap(std::string const n, std::string const type) :
							_name(n), _type(type), _hit(100), _max_hit(100),
							_nrg(100), _max_nrg(100), _level(1), _melee(30),
							_ranged(20), _armor_reduction(5)

{
	std::cout << *this << " is born." << std::endl;

	return ;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	*this = src;
	std::cout << *this << " is born." << std::endl;

	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << *this << " is dead." << std::endl;

	return ;
}

unsigned int			ClapTrap::get_hit(void) const
{
	return (this->_hit);
}

unsigned int			ClapTrap::get_nrg(void) const
{
	return (this->_nrg);
}

unsigned int			ClapTrap::get_level(void) const
{
	return (this->_level);
}

unsigned int			ClapTrap::get_melee(void) const
{
	return (this->_melee);
}

unsigned int			ClapTrap::get_ranged(void) const
{
	return (this->_ranged);
}

unsigned int			ClapTrap::get_armor_reduction(void) const
{
	return (this->_armor_reduction);
}

unsigned int	ClapTrap::get_max_hit(void) const
{
	return (this->_max_hit);
}

unsigned int	ClapTrap::get_max_nrg(void) const
{
	return (this->_max_nrg);
}

std::string	ClapTrap::get_name(void) const
{
	return (this->_name);
}

std::string	ClapTrap::get_type(void) const
{
	return (this->_type);
}

ClapTrap		&ClapTrap::operator=(ClapTrap const &rhs)
{
	std::cout << "Assignement operator called" << std::endl;

	if (this != &rhs)
	{
		this->_type = rhs.get_type();
		this->_hit = rhs.get_hit();
		this->_name = rhs.get_name();
		this->_max_hit = rhs.get_max_hit();
		this->_nrg = rhs.get_nrg();
		this->_max_nrg = rhs.get_max_nrg();
		this->_level = rhs.get_level();
		this->_melee = rhs.get_melee();
		this->_ranged = rhs.get_ranged();
		this->_armor_reduction = rhs.get_armor_reduction();
	}
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, ClapTrap const &i)
{
	o  << i.get_name();

	return (o);
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	unsigned int	damage;

	if (amount == 0)
		return ;
	damage = (amount - this->_armor_reduction);
	if (damage < this->_hit)
	{
		this->_hit -= damage;
		std::cout << this->_type << " "  << *this << " take "
			<< damage << " damage, " << this->_hit << "HP remaining."
			<< std::endl;
	}
	else
	{
		std::cout << this->_type << " "  << *this << " take lethal damage."
					<< std::endl;
		this->_hit = 0;
	}
}

void			ClapTrap::beRepaired(unsigned int amount)
{
	if (amount == 0)
		return ;
	if (amount < this->_max_hit - this->_hit)
	{
		this->_hit += amount;
		std::cout << this->_type << " "  << *this << " repair "
			<< amount << "HP, " << this->_hit << "HP remaining."
			<< std::endl;
	}
	else
	{
		std::cout << this->_type << " "  << *this << " fully repaired."
					<< std::endl;
		this->_hit = this->_max_hit;
	}
}

void			ClapTrap::meleeAttack(std::string const &target) const
{
	std::cout << this->_type << " " << *this << " attacks " << target
			<< " at melee, for " << this->_melee << " damage." << std::endl;
}

void			ClapTrap::rangedAttack(std::string const &target) const
{
	std::cout << this->_type << " "  << *this << " attacks " << target
			<< " at range, for " << this->_ranged << " damage." << std::endl;
}
