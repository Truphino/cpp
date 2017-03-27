/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 13:53:46 by trecomps          #+#    #+#             */
/*   Updated: 2017/03/27 15:11:52 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_CLASS_H
# define POWERFIST_CLASS_H

#include <iostream>
#include "AWeapon.class.hpp"

class PowerFist : public AWeapon
{

public :

	PowerFist(void);
	PowerFist(PowerFist const &rhs);
	~PowerFist(void);

	virtual void		attack(Enemy &enemy) const;

private :

};

#endif
