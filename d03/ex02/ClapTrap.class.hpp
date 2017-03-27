/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 10:34:06 by trecomps          #+#    #+#             */
/*   Updated: 2017/03/27 11:02:33 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_CLASS_H
# define CLAPTRAP_CLASS_H

#include <iostream>

class ClapTrap {

public :

	ClapTrap(void);
	ClapTrap(std::string const name, std::string const type);
	ClapTrap(ClapTrap const &rhs);
	~ClapTrap(void);

	ClapTrap	&operator=(ClapTrap const &rhs);

	std::string				get_name(void) const;
	std::string				get_type(void) const;
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

protected :

	std::string				_name;
	std::string				_type;
	unsigned int			_hit;
	unsigned int			_max_hit;
	unsigned int			_nrg;
	unsigned int			_max_nrg;
	unsigned int			_level;
	unsigned int			_melee;
	unsigned int			_ranged;
	unsigned int			_armor_reduction;

};

std::ostream		&operator<<(std::ostream &o, ClapTrap const &i);

#endif
