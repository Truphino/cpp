/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 16:51:07 by trecomps          #+#    #+#             */
/*   Updated: 2017/03/29 11:13:08 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.class.hpp"
#include "TacticalMarine.class.hpp"
#include "AssaultTerminator.class.hpp"

int main()
{
	ISpaceMarine* cur;
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim->clone());
	vlc->push(bob);
	vlc->push(jim);
	vlc->push(bob->clone());
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	std::cout << std::endl << std::endl << std::endl;
	cur = vlc->getUnit(-1);
	if (cur)
	{
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	std::cout << std::endl << std::endl << std::endl;
	cur = vlc->getUnit(3);
	if (cur)
	{
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	std::cout << std::endl << std::endl << std::endl;
	cur = vlc->getUnit(6);
	if (cur)
	{
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	return 0;
}
