/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 17:52:20 by trecomps          #+#    #+#             */
/*   Updated: 2018/04/06 17:58:20 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.class.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	//std::cout << "Parametric constructor called" << std::endl;

	return ;
}

HumanB::~HumanB(void)
{
	//std::cout << "Destructor called" << std::endl;
	
	return ;
}

void		HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void		HumanB::attack(void) const
{
	std::cout << this->_name << " attack with " << this->_weapon->getType()
		<< std::endl;
}
