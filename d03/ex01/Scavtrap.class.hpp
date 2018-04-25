/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 14:41:02 by trecomps          #+#    #+#             */
/*   Updated: 2018/04/12 14:41:03 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_CLASS_H
# define SCAVTRAP_CLASS_H

#include <iostream>

class ScavTrap {

public :

	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &rhs);
	~ScavTrap(void);

	ScavTrap	&operator=(ScavTrap const &rhs);

	std::string				get_name(void) const;
	unsigned int			get_hit(void) const;
	unsigned int			get_max_hit(void) const;
	unsigned int			get_nrg(void) const;
	unsigned int			get_max_nrg(void) const;
	unsigned int			get_level(void) const;
	unsigned int			get_melee(void) const;
	unsigned int			get_ranged(void) const;
	unsigned int			get_armor_reduction(void) const;

	void					takeDamage(unsigned int amount);
	void					beRepaired(unsigned int amount);
	void					meleeAttack(std::string const &target) const;
	void					rangedAttack(std::string const &target) const;
	void					challengeNewcomer(void);

private :

	std::string				_name;
	unsigned int			_hit;
	unsigned int			_max_hit;
	unsigned int			_nrg;
	unsigned int			_max_nrg;
	unsigned int			_level;
	unsigned int			_melee;
	unsigned int			_ranged;
	unsigned int			_armor_reduction;

};

std::ostream		&operator<<(std::ostream &o, ScavTrap const &i);

#endif
