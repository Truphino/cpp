/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 17:39:29 by trecomps          #+#    #+#             */
/*   Updated: 2018/04/06 17:49:22 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANA_CLASS_H
# define HUMANA_CLASS_H

#include <iostream>
#include "Weapon.class.hpp"

class HumanA {

public :

	HumanA(std::string name, Weapon &weapon);
	~HumanA(void);
	void					attack(void) const;

private :
	HumanA(void);
	const std::string		_name;
	Weapon					&_weapon;
};

#endif
