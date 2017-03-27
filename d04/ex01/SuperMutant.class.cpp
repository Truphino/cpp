/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 14:14:54 by trecomps          #+#    #+#             */
/*   Updated: 2017/03/27 14:28:37 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.class.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;

	return ;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh ..." << std::endl;

	return ;
}

void		SuperMutant::takeDamage(int damage)
{
	damage -= 3;
	if (damage > 0)
		this->_hp -= damage;
}
