/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 14:11:07 by                   #+#    #+#             */
/*   Updated: 2017/03/23 15:32:31 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FRAGTRAP_CLASS_H
# define FRAGTRAP_CLASS_H

#include <iostream>

class FragTrap {

public :

	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap const &rhs);
	~FragTrap(void);

	FragTrap	&operator=(FragTrap const &rhs);

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
	void					vaulthunter_dot_exe(std::string const &target);

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

std::ostream		&operator<<(std::ostream &o, FragTrap const &i);

#endif
