/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 14:10:45 by                   #+#    #+#             */
/*   Updated: 2018/04/25 11:10:52 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "FragTrap.class.hpp"

FragTrap::FragTrap(void) : ClapTrap("FR4G-TP")
{
	this->_hit = 100;
	this->_max_hit = 100;
	this->_nrg = 100;
	this->_max_nrg = 100;
	this->_level = 1;
	this->_melee = 30;
	this->_ranged = 20;
	this->_armor_reduction = 5;
	std::cout << *this << ", your metaphorical ship has finally come in!"
				<< std::endl;

	return ;
}

FragTrap::FragTrap(std::string const n) : ClapTrap(n)
{
	this->_hit = 100;
	this->_max_hit = 100;
	this->_nrg = 100;
	this->_max_nrg = 100;
	this->_level = 1;
	this->_melee = 30;
	this->_ranged = 20;
	this->_armor_reduction = 5;
	std::cout << *this << ", your metaphorical ship has finally come in!"
				<< std::endl;

	return ;
}

FragTrap::FragTrap(FragTrap const &src)
{
	*this = src;
	std::cout << *this << ", your metaphorical ship has finally come in!"
				<< std::endl;

	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "NOOOOO! DAMN YOU, STAIRS! Dammit, Jack --"
			<< "how did you know stairs were my ONLY weakness?!" << std::endl;

	return ;
}

void			FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	int			rand;

	if (this->_nrg >= 25)
	{
		this->_nrg -= 25;
	}
	else
	{
		std::cout << "FR4G-TP " << *this << " is out of energy." << std::endl;
		return ;
	}
	rand = std::rand() % 5;
	if (rand == 0)
		std::cout << "FR4G-TP " << *this << " use TORGUE FIESTA"
					<< " on " << target << "."
					<< "EXPLOOOOOOOSIONNNS!" << std::endl;
	else if (rand == 1)
		std::cout << "FR4G-TP " << *this << " use One Shot Wonder"
					<< " on " << target << "."
					<< "If it took more than one shot,"
					<< " you weren't using a Jakobs!" << std::endl;
	else if (rand == 2)
		std::cout << "FR4G-TP " << *this << " use Laser Inferno"
					<< " on " << target << "."
					<< "It's disco time!" << std::endl;
	else if (rand == 3)
		std::cout << "FR4G-TP " << *this << " use Rubber Ducky"
					<< " on " << target << "."
					<< "*Bounce*" << std::endl;
	else if (rand == 4)
		std::cout << "FR4G-TP " << *this << " use Senseless Sacrifice"
					<< " on " << target << "."
					<< "and just die." << std::endl;
}
