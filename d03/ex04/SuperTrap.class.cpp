/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 14:10:45 by                   #+#    #+#             */
/*   Updated: 2017/03/27 12:10:48 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "SuperTrap.class.hpp"

SuperTrap::SuperTrap(void) : 
					ClapTrap("SUP3R-TP", "SUP3R-TP"),
					FragTrap(), NinjaTrap()
{
	std::cout << *this << ": SuperTrap is born" << std::endl;

	return ;
}

SuperTrap::SuperTrap(std::string const n) :
					ClapTrap(n, "SUP3R-TP"),
					FragTrap(n), NinjaTrap(n)
{
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
