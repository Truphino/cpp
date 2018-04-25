/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 14:10:45 by                   #+#    #+#             */
/*   Updated: 2018/04/25 11:23:38 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "SuperTrap.class.hpp"

SuperTrap::SuperTrap(void) : 
					ClapTrap("SUP3R-TP"),
					FragTrap(), NinjaTrap()
{
	std::cout << *this << ": SuperTrap is born" << std::endl;

	return ;
}

SuperTrap::SuperTrap(std::string const n) :
					ClapTrap(n),
					FragTrap(n), NinjaTrap(n)
{
	this->_hit = FragTrap::get_hit();
	this->_max_hit = FragTrap::get_max_hit();
	this->_nrg = NinjaTrap::get_nrg();
	this->_max_nrg = NinjaTrap::get_max_nrg();
	this->_level = 1;
	this->_melee = NinjaTrap::get_melee();
	this->_ranged = FragTrap::get_ranged();
	this->_armor_reduction = FragTrap::get_armor_reduction();
	std::cout << *this << ": SuperTrap is born" << std::endl;

	return ;
}

SuperTrap::SuperTrap(SuperTrap const &src)
{
	*this = src;
	std::cout << *this << ": SuperTrap is born" << std::endl;

	return ;
}

SuperTrap::~SuperTrap(void)
{
	std::cout << "NOOOOO! DAMN YOU, STAIRS! Dammit, Jack --"
			<< "how did you know stairs were my ONLY weakness?!" << std::endl;

	return ;
}
