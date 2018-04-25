/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 14:10:45 by                   #+#    #+#             */
/*   Updated: 2018/04/12 14:37:00 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "FragTrap.class.hpp"

FragTrap::FragTrap(void) : _name("FR4G-TP"), _hit(100), _max_hit(100),
							_nrg(100), _max_nrg(100), _level(1), _melee(30),
							_ranged(20), _armor_reduction(5)
{
	std::cout << *this << ", your metaphorical ship has finally come in!"
				<< std::endl;

	return ;
}

FragTrap::FragTrap(std::string const n) :
							_name(n), _hit(100), _max_hit(100),
							_nrg(100), _max_nrg(100), _level(1), _melee(30),
							_ranged(20), _armor_reduction(5)

{
	std::cout << *this << ", your metaphorical ship has finally come in!"
				<< std::endl;

	return ;
}

FragTrap::FragTrap(FragTrap const &src)
{
	*this = src;
	std::cout << *this << ", your metaphorical ship has finally come in!"
				<< std::endl;

	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "NOOOOO! DAMN YOU, STAIRS! Dammit, Jack --"
			<< "how did you know stairs were my ONLY weakness?!" << std::endl;

	return ;
}

unsigned int			FragTrap::get_hit(void) const
{
	return (this->_hit);
}

unsigned int			FragTrap::get_nrg(void) const
{
	return (this->_nrg);
}

unsigned int			FragTrap::get_level(void) const
{
	return (this->_level);
}

unsigned int			FragTrap::get_melee(void) const
{
	return (this->_melee);
}

unsigned int			FragTrap::get_ranged(void) const
{
	return (this->_ranged);
}

unsigned int			FragTrap::get_armor_reduction(void) const
{
	return (this->_armor_reduction);
}

unsigned int	FragTrap::get_max_hit(void) const
{
	return (this->_max_hit);
}

unsigned int	FragTrap::get_max_nrg(void) const
{
	return (this->_max_nrg);
}

std::string	FragTrap::get_name(void) const
{
	return (this->_name);
}

FragTrap		&FragTrap::operator=(FragTrap const &rhs)
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

std::ostream	&operator<<(std::ostream &o, FragTrap const &i)
{
	o  << i.get_name();

	return (o);
}

void		FragTrap::takeDamage(unsigned int amount)
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

void			FragTrap::beRepaired(unsigned int amount)
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

void			FragTrap::meleeAttack(std::string const &target) const
{
	std::cout << "FR4G-tp " << *this << " attacks " << target
			<< " at melee, for " << this->_melee << " damage." << std::endl;
}

void			FragTrap::rangedAttack(std::string const &target) const
{
	std::cout << "FR4G-tp " << *this << " attacks " << target
			<< " at range, for " << this->_ranged << " damage." << std::endl;
}

void			FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	int			rand;

	if (this->_nrg >= 25)
		this->_nrg -= 25;
	else
	{
		std::cout << "FR4G-TP " << *this << " is out of energy." << std::endl;
		return ;
	}
	rand = std::rand() % 5;
	if (rand == 0)
		std::cout << "FR4G-TP " << *this << " use TORGUE FIESTA"
					<< " on " << target << "."
					<< "EXPLOOOOOOOSIONNNS!" << std::endl;
	else if (rand == 1)
		std::cout << "FR4G-TP " << *this << " use One Shot Wonder"
					<< " on " << target << "."
					<< "If it took more than one shot,"
					<< " you weren't using a Jakobs!" << std::endl;
	else if (rand == 2)
		std::cout << "FR4G-TP " << *this << " use Laser Inferno"
					<< " on " << target << "."
					<< "It's disco time!" << std::endl;
	else if (rand == 3)
		std::cout << "FR4G-TP " << *this << " use Rubber Ducky"
					<< " on " << target << "."
					<< "*Bounce*" << std::endl;
	else if (rand == 4)
		std::cout << "FR4G-TP " << *this << " use Senseless Sacrifice"
					<< " on " << target << "."
					<< "and just die." << std::endl;
}
