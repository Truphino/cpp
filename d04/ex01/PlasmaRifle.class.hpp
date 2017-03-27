/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 13:53:46 by trecomps          #+#    #+#             */
/*   Updated: 2017/03/27 15:12:13 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_CLASS_H
# define PLASMARIFLE_CLASS_H

#include <iostream>
#include "AWeapon.class.hpp"

class PlasmaRifle : public AWeapon
{

public :

	PlasmaRifle(void);
	PlasmaRifle(PlasmaRifle const &rhs);
	~PlasmaRifle(void);

	virtual void		attack(Enemy &enemy) const;

};

#endif
