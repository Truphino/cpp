/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 17:40:00 by trecomps          #+#    #+#             */
/*   Updated: 2018/04/06 17:50:40 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanA.class.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) :
							_name(name), _weapon(weapon)
{
	//std::cout << "Parametric constructor called" << std::endl;

	return ;
}

HumanA::~HumanA(void)
{
	//std::cout << "Destructor called" << std::endl;
	
	return ;
}

void		HumanA::attack(void) const
{
	std::cout << this->_name << " attack with " << this->_weapon.getType()
		<< std::endl;
}
