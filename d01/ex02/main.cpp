/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 12:52:04 by trecomps          #+#    #+#             */
/*   Updated: 2018/04/06 14:37:49 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.class.hpp"

int				main(void)
{
	Zombie			*paul;
	ZombieEvent		zomb_e;

	zomb_e.setZombieType("Biter");
	paul = zomb_e.newZombie("Paul");
	paul->announce();
	delete paul;
	zomb_e.randomChump();
	zomb_e.setZombieType("Creeper");
	zomb_e.randomChump();
	zomb_e.randomChump();
}
