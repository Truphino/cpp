/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 13:29:29 by trecomps          #+#    #+#             */
/*   Updated: 2017/03/27 14:02:26 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_CLASS_H
# define AWEAPON_CLASS_H

#include <iostream>
#include "Enemy.class.hpp"

class AWeapon {

public :

	AWeapon(std::string const &name, int ap_cost, int damage);
	~AWeapon(void);

	AWeapon	&operator=(AWeapon const &rhs);

	std::string		getName(void) const;
	int				getDamage(void) const;
	int				getAP(void) const;
	virtual void	attack(Enemy &enemy) const = 0;

private :

	AWeapon(void);
	AWeapon(AWeapon const &rhs);
	std::string		_name;
	int				_ap_cost;
	int				_damage;

};

#endif
