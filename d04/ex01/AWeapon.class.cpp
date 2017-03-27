/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 13:30:04 by trecomps          #+#    #+#             */
/*   Updated: 2017/03/27 14:22:21 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.class.hpp"

AWeapon::AWeapon(void)
{
	return ;
}

AWeapon::AWeapon(std::string const &name, int ap_cost, int damage) :
						_name(name), _ap_cost(ap_cost), _damage(damage)
{
	return ;
}

AWeapon::AWeapon(AWeapon const &src)
{
	*this = src;

	return ;
}

AWeapon::~AWeapon(void)
{
	
	return ;
}

std::string	AWeapon::getName(void) const
{
	return (this->_name);
}

int			AWeapon::getDamage(void) const
{
	return (this->_damage);
}

int			AWeapon::getAP(void) const
{
	return (this->_ap_cost);
}

AWeapon		&AWeapon::operator=(AWeapon const &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs.getName();
	}
	return (*this);
}
