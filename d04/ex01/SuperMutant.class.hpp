/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 14:13:50 by trecomps          #+#    #+#             */
/*   Updated: 2017/03/27 14:28:36 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_CLASS_H
# define SUPERMUTANT_CLASS_H

#include <iostream>
#include "Enemy.class.hpp"

class SuperMutant : public Enemy
{

public :

	SuperMutant(void);
	~SuperMutant(void);

	virtual void	takeDamage(int damage);

};

#endif
