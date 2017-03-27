/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 14:01:36 by trecomps          #+#    #+#             */
/*   Updated: 2017/03/27 14:26:57 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.class.hpp"

Enemy::Enemy(void) : _hp(0), _type("")
{
	return ;
}

Enemy::Enemy(int hp, std::string const &type) : _hp(hp), _type(type)
{
	return ;
}

Enemy::Enemy(Enemy const &src)
{
	*this = src;

	return ;
}

Enemy::~Enemy(void)
{
	return ;
}

int			Enemy::getHp(void) const
{
	return (this->_hp);
}

std::string	Enemy::getType(void) const
{
	return (this->_type);
}

void		Enemy::takeDamage(int damage)
{
	if (damage > 0)
		this->_hp -= damage;
}

Enemy		&Enemy::operator=(Enemy const &rhs)
{
	if (this != &rhs)
	{
		this->_hp = rhs.getHp();
		this->_type = rhs.getType();
	}
	return (*this);
}
