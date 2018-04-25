/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scavtrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 14:41:10 by trecomps          #+#    #+#             */
/*   Updated: 2018/04/12 14:44:51 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "ScavTrap.class.hpp"

ScavTrap::ScavTrap(void) : _name("SC4V-TP"), _hit(100), _max_hit(100),
							_nrg(50), _max_nrg(50), _level(1), _melee(20),
							_ranged(15), _armor_reduction(3)
{
	std::cout << *this << ": It's a VERY important duty, as I'm not to let "
		<< "ANYONE in through here! Unless, of course, you're here as fresh "
		<< "meat for the recruitment grinder!" << std::endl;

	return ;
}

ScavTrap::ScavTrap(std::string const n) :
							_name(n), _hit(100), _max_hit(100),
							_nrg(50), _max_nrg(50), _level(1), _melee(20),
							_ranged(15), _armor_reduction(3)

{
	std::cout << *this << ": It's a VERY important duty, as I'm not to let "
		<< "ANYONE in through here! Unless, of course, you're here as fresh "
		<< "meat for the recruitment grinder!" << std::endl;

	return ;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	*this = src;
	std::cout << *this << ": It's a VERY important duty, as I'm not to let "
		<< "ANYONE in through here! Unless, of course, you're here as fresh "
		<< "meat for the recruitment grinder!" << std::endl;

	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "How did you know stairs were my ONLY weakness?!" << std::endl;

	return ;
}

unsigned int			ScavTrap::get_hit(void) const
{
	return (this->_hit);
}

unsigned int			ScavTrap::get_nrg(void) const
{
	return (this->_nrg);
}

unsigned int			ScavTrap::get_level(void) const
{
	return (this->_level);
}

unsigned int			ScavTrap::get_melee(void) const
{
	return (this->_melee);
}

unsigned int			ScavTrap::get_ranged(void) const
{
	return (this->_ranged);
}

unsigned int			ScavTrap::get_armor_reduction(void) const
{
	return (this->_armor_reduction);
}

unsigned int	ScavTrap::get_max_hit(void) const
{
	return (this->_max_hit);
}

unsigned int	ScavTrap::get_max_nrg(void) const
{
	return (this->_max_nrg);
}

std::string	ScavTrap::get_name(void) const
{
	return (this->_name);
}

ScavTrap		&ScavTrap::operator=(ScavTrap const &rhs)
{
	std::cout << "Assignement operator called" << std::endl;

	if (this != &rhs)
	{
		this->_hit = rhs.get_hit();
		*this = rhs.get_name();
		this->_max_hit = rhs.get_max_hit();
		this->_nrg = rhs.get_nrg();
		this->_max_nrg = rhs.get_max_nrg();
		this->_level = rhs.get_level();
		this->_melee = rhs.get_melee();
		this->_ranged = rhs.get_ranged();
		this->_armor_reduction = rhs.get_armor_reduction();
	}
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, ScavTrap const &i)
{
	o  << i.get_name();

	return (o);
}

void		ScavTrap::takeDamage(unsigned int amount)
{
	unsigned int	damage;

	if (amount == 0 || amount < this->_armor_reduction)
		return ;
	damage = (amount - this->_armor_reduction);
	if (damage < this->_hit)
	{
		this->_hit -= damage;
		std::cout << "Fr4G-TP " << *this << " take "
			<< damage << " damage, " << this->_hit << "HP remaining."
			<< std::endl;
	}
	else
	{
		std::cout << "Fr4G-TP " << *this << " take lethal damage."
					<< std::endl;
		this->_hit = 0;
	}
}

void			ScavTrap::beRepaired(unsigned int amount)
{
	if (amount == 0)
		return ;
	if (amount < this->_max_hit - this->_hit)
	{
		this->_hit += amount;
		std::cout << "Fr4G-TP " << *this << " repair "
			<< amount << "HP, " << this->_hit << "HP remaining."
			<< std::endl;
	}
	else
	{
		std::cout << "Fr4G-TP " << *this << " fully repaired."
					<< std::endl;
		this->_hit = this->_max_hit;
	}
}

void			ScavTrap::meleeAttack(std::string const &target) const
{
	std::cout << "SC4V-TP " << *this << " attacks " << target
			<< " at melee, for " << this->_melee << " damage." << std::endl;
}

void			ScavTrap::rangedAttack(std::string const &target) const
{
	std::cout << "SC4V-TP " << *this << " attacks " << target
			<< " at range, for " << this->_ranged << " damage." << std::endl;
}

void			ScavTrap::challengeNewcomer(void)
{
	int			rand;

	if (this->_nrg >= 25)
	{
		this->_nrg -= 25;
	}
	else
	{
		std::cout << "SC4V-TP " << *this << " is out of energy." << std::endl;
		return ;
	}
	rand = std::rand() % 6;
	if (rand == 0)
		std::cout << *this << ": Find 139,377 Brown rock" << std::endl;
	else if (rand == 1)
		std::cout << *this << ": Defeat Ug-Thak, Lord of Skags" << std::endl;
	else if (rand == 2)
		std::cout << *this << ": Pilfer lost staff of Mount Schulfer"
			<< std::endl;
	else if (rand == 3)
		std::cout << *this << ": Defeat Destoyer of Worlds" << std::endl;
	else if (rand == 4)
		std::cout << *this << ": Dance, dance, baby *evil laught*" << std::endl;
	else if (rand == 5)
		std::cout << *this << ": Go to secret entrance, the password is 'Arrg!'"
			<< std::endl;
}
