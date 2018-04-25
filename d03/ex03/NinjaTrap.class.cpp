/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 14:10:45 by                   #+#    #+#             */
/*   Updated: 2018/04/25 10:32:44 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "NinjaTrap.class.hpp"

NinjaTrap::NinjaTrap(void) : ClapTrap("NINJ4-TP", "NINJ4-TP")
{
	this->_hit = 60;
	this->_max_hit = 60;
	this->_nrg = 120;
	this->_max_nrg = 120;
	this->_nrg = 50;
	this->_max_nrg = 50;
	this->_melee = 60;
	this->_ranged = 5;
	this->_armor_reduction = 0;
	std::cout << *this << ": I'm a new ninja"<< std::endl;

	return ;
}

NinjaTrap::NinjaTrap(std::string const n) : ClapTrap(n, "NINJ4-TP")
{
	this->_hit = 60;
	this->_max_hit = 60;
	this->_nrg = 120;
	this->_max_nrg = 120;
	this->_nrg = 50;
	this->_max_nrg = 50;
	this->_melee = 60;
	this->_ranged = 5;
	this->_armor_reduction = 0;
	std::cout << *this << ": I'm a new ninja"<< std::endl;

	return ;
}

NinjaTrap::NinjaTrap(NinjaTrap const &src)
{
	*this = src;
	std::cout << *this << ": I'm a new ninja"<< std::endl;

	return ;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << *this << ": I'm a dead ninja"<< std::endl;

	return ;
}

void			NinjaTrap::ninjaShoebox(FragTrap const &rhs)
{
	std::cout << "Come here F R LUL G T LUL P " << rhs << std::endl;
}

void			NinjaTrap::ninjaShoebox(NinjaTrap const &rhs)
{
	std::cout << "Oh, a felow ninja, come here " << rhs  << " <3" << std::endl;
}

void			NinjaTrap::ninjaShoebox(ScavTrap const &rhs)
{
	std::cout << "Hey " << rhs << ". It's a trap !!!"  << std::endl;
}
