/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 13:53:27 by trecomps          #+#    #+#             */
/*   Updated: 2017/03/27 14:33:26 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.class.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21)
{
	return ;
}

PlasmaRifle::~PlasmaRifle(void)
{
	return ;
}

void			PlasmaRifle::attack(Enemy &enemy) const
{
	enemy.takeDamage(this->getDamage());
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
