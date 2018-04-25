/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 14:10:45 by                   #+#    #+#             */
/*   Updated: 2018/04/25 11:12:02 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "ScavTrap.class.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("SC4V-TP")
{
	this->_hit = 100;
	this->_max_hit = 100;
	this->_nrg = 50;
	this->_max_nrg = 50;
	this->_level = 1;
	this->_melee = 20;
	this->_ranged = 15;
	this->_armor_reduction = 3;
	std::cout << *this << ": It's a VERY important duty, as I'm not to let "
		<< "ANYONE in through here! Unless, of course, you're here as fresh "
		<< "meat for the recruitment grinder!" << std::endl;

	return ;
}

ScavTrap::ScavTrap(std::string const n) : ClapTrap(n)
{
	this->_hit = 100;
	this->_max_hit = 100;
	this->_nrg = 50;
	this->_max_nrg = 50;
	this->_level = 1;
	this->_melee = 20;
	this->_ranged = 15;
	this->_armor_reduction = 3;
	std::cout << *this << ": It's a VERY important duty, as I'm not to let "
		<< "ANYONE in through here! Unless, of course, you're here as fresh "
		<< "meat for the recruitment grinder!" << std::endl;

	return ;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	*this = src;
	std::cout << *this << ": It's a VERY important duty, as I'm not to let "
		<< "ANYONE in through here! Unless, of course, you're here as fresh "
		<< "meat for the recruitment grinder!" << std::endl;

	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "How did you know stairs were my ONLY weakness?!" << std::endl;

	return ;
}

void			ScavTrap::challengeNewcomer(void)
{
	int			rand;

	if (this->_nrg >= 25)
	{
		this->_nrg -= 25;
	}
	else
	{
		std::cout << "SC4V-TP " << *this << " is out of energy." << std::endl;
		return ;
	}
	rand = std::rand() % 6;
	if (rand == 0)
		std::cout << *this << ": Find 139,377 Brown rock" << std::endl;
	else if (rand == 1)
		std::cout << *this << ": Defeat Ug-Thak, Lord of Skags" << std::endl;
	else if (rand == 2)
		std::cout << *this << ": Pilfer lost staff of Mount Schulfer"
			<< std::endl;
	else if (rand == 3)
		std::cout << *this << ": Defeat Destoyer of Worlds" << std::endl;
	else if (rand == 4)
		std::cout << *this << ": Dance, dance, baby *evil laught*" << std::endl;
	else if (rand == 5)
		std::cout << *this << ": Go to secret entrance, the password is 'Arrg!'"
			<< std::endl;
}
