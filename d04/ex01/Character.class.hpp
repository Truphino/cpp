/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 14:35:29 by trecomps          #+#    #+#             */
/*   Updated: 2017/03/27 15:05:35 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_CLASS_H
# define CHARACTER_CLASS_H

#include <iostream>
#include "AWeapon.class.hpp"

class Character {

public :

	Character(void);
	Character(std::string name);
	Character(Character const &rhs);
	~Character(void);

	Character	&operator=(Character const &rhs);

	std::string	getName(void) const;
	std::string	getWeaponName(void) const;
	int			getAP(void) const;
	AWeapon		*getWeapon(void) const;

	void		attack(Enemy *enemy);
	void		recoverAP();
	void		equip(AWeapon *weapon);

private :

	std::string			_name;
	int					_ap;
	AWeapon				*_weapon;

};

std::ostream		&operator<<(std::ostream &o, Character const &i);

#endif
