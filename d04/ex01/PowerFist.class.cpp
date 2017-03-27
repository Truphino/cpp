/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 13:53:27 by trecomps          #+#    #+#             */
/*   Updated: 2017/03/27 14:33:45 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.class.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50)
{
	return ;
}

PowerFist::~PowerFist(void)
{
	return ;
}

void			PowerFist::attack(Enemy &enemy) const
{
	enemy.takeDamage(this->getDamage());
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
