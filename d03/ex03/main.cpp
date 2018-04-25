/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 15:24:37 by                   #+#    #+#             */
/*   Updated: 2018/04/25 10:30:23 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.class.hpp"
#include "ScavTrap.class.hpp"
#include "NinjaTrap.class.hpp"

int			main(void)
{
	FragTrap	claptrap;
	FragTrap	cl4p_tp("CL4P-TP");
	ScavTrap	scavtrap("scavtrap");
	ScavTrap	sc4p_tp;
	NinjaTrap	ninjatrap("ninjatrap");
	NinjaTrap	ninj4_tp;

	claptrap.meleeAttack("CL4p-TP");
	cl4p_tp.takeDamage(claptrap.get_melee());
	claptrap.rangedAttack("CL4p-TP");
	cl4p_tp.takeDamage(claptrap.get_ranged());
	claptrap.vaulthunter_dot_exe("CL4P-TP");
	claptrap.vaulthunter_dot_exe("CL4P-TP");
	claptrap.vaulthunter_dot_exe("CL4P-TP");
	claptrap.vaulthunter_dot_exe("CL4P-TP");
	claptrap.vaulthunter_dot_exe("CL4P-TP");
	claptrap.vaulthunter_dot_exe("CL4P-TP");
	claptrap.meleeAttack("CL4p-TP");
	cl4p_tp.takeDamage(claptrap.get_melee());
	claptrap.meleeAttack("CL4p-TP");
	cl4p_tp.takeDamage(claptrap.get_melee());
	cl4p_tp.beRepaired(10);
	cl4p_tp.beRepaired(100);
	claptrap.meleeAttack("CL4p-TP");
	cl4p_tp.takeDamage(claptrap.get_melee());
	claptrap.meleeAttack("CL4p-TP");
	cl4p_tp.takeDamage(claptrap.get_melee());
	claptrap.meleeAttack("CL4p-TP");
	cl4p_tp.takeDamage(claptrap.get_melee());

	scavtrap.meleeAttack("SC4v-TP");
	cl4p_tp.takeDamage(scavtrap.get_melee());
	scavtrap.rangedAttack("SC4v-TP");
	cl4p_tp.takeDamage(scavtrap.get_ranged());
	scavtrap.challengeNewcomer();
	scavtrap.challengeNewcomer();
	scavtrap.challengeNewcomer();
	scavtrap.challengeNewcomer();
	scavtrap.challengeNewcomer();
	scavtrap.challengeNewcomer();
	scavtrap.challengeNewcomer();
	scavtrap.meleeAttack("SC4v-TP");
	cl4p_tp.takeDamage(scavtrap.get_melee());
	scavtrap.meleeAttack("SC4v-TP");
	cl4p_tp.takeDamage(scavtrap.get_melee());
	cl4p_tp.beRepaired(10);
	cl4p_tp.beRepaired(100);
	scavtrap.meleeAttack("SC4v-TP");
	cl4p_tp.takeDamage(scavtrap.get_melee());
	scavtrap.meleeAttack("SC4v-TP");
	cl4p_tp.takeDamage(scavtrap.get_melee());
	scavtrap.meleeAttack("SC4v-TP");
	cl4p_tp.takeDamage(scavtrap.get_melee());

	ninjatrap.meleeAttack("SC4v-TP");
	cl4p_tp.takeDamage(ninjatrap.get_melee());
	ninjatrap.rangedAttack("SC4v-TP");
	cl4p_tp.takeDamage(ninjatrap.get_ranged());
	ninjatrap.ninjaShoebox(scavtrap);
	ninjatrap.ninjaShoebox(sc4p_tp);
	ninjatrap.ninjaShoebox(cl4p_tp);
	ninjatrap.ninjaShoebox(claptrap);
	ninjatrap.meleeAttack("SC4v-TP");
	cl4p_tp.takeDamage(ninjatrap.get_melee());
	ninjatrap.meleeAttack("SC4v-TP");
	cl4p_tp.takeDamage(ninjatrap.get_melee());
	cl4p_tp.beRepaired(10);
	cl4p_tp.beRepaired(100);
	ninjatrap.meleeAttack("SC4v-TP");
	cl4p_tp.takeDamage(ninjatrap.get_melee());
	ninjatrap.meleeAttack("SC4v-TP");
	cl4p_tp.takeDamage(ninjatrap.get_melee());
	ninjatrap.meleeAttack("SC4v-TP");
	cl4p_tp.takeDamage(ninjatrap.get_melee());

}
