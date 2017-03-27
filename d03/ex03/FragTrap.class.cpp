/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 14:10:45 by                   #+#    #+#             */
/*   Updated: 2017/03/27 10:54:16 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "FragTrap.class.hpp"

FragTrap::FragTrap(void) : ClapTrap("FR4G-TP", "FR4G-TP")
{
	std::cout << *this << ", your metaphorical ship has finally come in!"
				<< std::endl;

	return ;
}

FragTrap::FragTrap(std::string const n) : ClapTrap(n, "FR4G-TP")
{
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
