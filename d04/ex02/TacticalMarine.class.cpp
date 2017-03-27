/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.class.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 15:55:42 by trecomps          #+#    #+#             */
/*   Updated: 2017/03/27 16:22:57 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.class.hpp"

TacticalMarine::TacticalMarine(void)
{
	std::cout << "Tactical Marine ready for battle" << std::endl;

	return ;
}

TacticalMarine::~TacticalMarine(void)
{
	std::cout << "Aaargh ...." << std::endl;

	return ;
}

ISpaceMarine		*TacticalMarine::clone(void) const
{
	return (new TacticalMarine);
}

void				TacticalMarine::battleCry(void) const
{
	std::cout << "For the holy PLOT !" << std::endl;
}

void				TacticalMarine::rangedAttack(void) const
{
	std::cout << "* attacks with bolter *" << std::endl;
}

void				TacticalMarine::meleeAttack(void) const
{
	std::cout << "* attacks with chainsword *" << std::endl;
}
