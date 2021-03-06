/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 15:24:37 by                   #+#    #+#             */
/*   Updated: 2017/03/23 15:46:22 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.class.hpp"

int			main(void)
{
	FragTrap	claptrap;
	FragTrap	cl4p_tp("CL4P-TP");

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

}
