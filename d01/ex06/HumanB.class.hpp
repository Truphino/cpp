/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 17:51:27 by trecomps          #+#    #+#             */
/*   Updated: 2018/04/06 17:58:19 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CLASS_H
# define HUMANB_CLASS_H

#include <iostream>
#include "Weapon.class.hpp"

class HumanB {

public :

	HumanB(std::string name);
	~HumanB(void);
	void					setWeapon(Weapon &weapon);
	void					attack(void) const;

private :
	HumanB(void);
	const std::string		_name;
	Weapon					*_weapon;
};

#endif
