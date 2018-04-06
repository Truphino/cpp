/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 15:30:10 by trecomps          #+#    #+#             */
/*   Updated: 2018/04/06 15:34:18 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.class.hpp"

int			main(void)
{
	ZombieHorde		*the_horde;

	the_horde = new ZombieHorde(4);
	the_horde->announce();
	delete the_horde;
	std::cout << std::endl;
	the_horde = new ZombieHorde(600);
	the_horde->announce();
	delete the_horde;
}
