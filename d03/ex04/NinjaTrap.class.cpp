/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 14:10:45 by                   #+#    #+#             */
/*   Updated: 2017/03/27 11:35:25 by trecomps         ###   ########.fr       */
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
	this->_nrg = 50;
	this->_max_nrg = 50;
	this->_melee = 20;
	this->_ranged = 15;
	this->_armor_reduction = 3;
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

void			NinjaTrap::ninjaShoebox(ClapTrap const &rhs)
{
	if (rhs.get_type() == "CL4P-TP")
	{
		std::cout << "Funny CL4P-TP" << std::endl;
	}
	else if (rhs.get_type() == "FR4G-TP")
	{
		std::cout << "Funny FR4G-TP" << std::endl;
	}
	else if (rhs.get_type() == "SC4V-TP")
	{
		std::cout << "Funny SC4V-TP" << std::endl;
	}
	else if (rhs.get_type() == "NINJ4-TP")
	{
		std::cout << "Funny NINJ4-TP" << std::endl;
	}
	else
	{
		std::cout << "Funny other" << std::endl;
	}
}
