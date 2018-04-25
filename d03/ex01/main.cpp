/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 15:24:37 by                   #+#    #+#             */
/*   Updated: 2018/04/12 14:41:34 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.class.hpp"
#include "ScavTrap.class.hpp"

int			main(void)
{
	FragTrap	claptrap;
	FragTrap	cl4p_tp("CL4P-TP");
	ScavTrap	scavtrap("scavtrap");
	ScavTrap	sc4p_tp;

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

}
