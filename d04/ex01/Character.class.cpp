/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 14:35:13 by trecomps          #+#    #+#             */
/*   Updated: 2017/03/27 15:13:32 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Character.class.hpp"

Character::Character(void) : _name("John"), _ap(40), _weapon(NULL)
{
	return ;
}

Character::Character(std::string name) : _name(name), _ap(40), _weapon(NULL)
{
	return ;
}

Character::Character(Character const &src)
{
	*this = src;

	return ;
}

Character::~Character(void)
{
	return ;
}

std::string	Character::getName(void) const
{
	return (this->_name);
}

std::string	Character::getWeaponName(void) const
{
	if (this->_weapon)
		return (this->_weapon->getName());
	else
		return ("");
}

int			Character::getAP(void) const
{
	return (this->_ap);
}

AWeapon		*Character::getWeapon(void) const
{
	return (this->_weapon);
}

void		Character::attack(Enemy *enemy)
{
	if (this->getWeapon() && this->_ap >= this->_weapon->getAP())
	{
		this->_ap -= this->_weapon->getAP();
		std::cout << this->getName() << " attacks " << enemy->getType()
			<< " with a " << this->getWeaponName() << std::endl;
		this->_weapon->attack(*enemy);
		if (enemy->getHp() <= 0)
			delete enemy;
	}
}

void			Character::recoverAP(void)
{
	if (this->_ap >= 40 - 10)
		this->_ap = 40;
	else
		this->_ap += 10;
}

void			Character::equip(AWeapon *weapon)
{
	this->_weapon = weapon;
}

Character		&Character::operator=(Character const &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_ap = rhs.getAP();
		this->_weapon = rhs.getWeapon();
	}
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Character const &i)
{
	if (i.getWeapon())
		o << i.getName() << " has " << i.getAP() << " AP and wield a "
		<< i.getWeaponName() << std::endl;
	else
		o << i.getName() << " has " << i.getAP() << " and is unarmed"
		<< std::endl;

	return (o);
}
