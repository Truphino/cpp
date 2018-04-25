/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 15:24:37 by                   #+#    #+#             */
/*   Updated: 2018/04/25 11:30:52 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.class.hpp"
#include "ScavTrap.class.hpp"
#include "NinjaTrap.class.hpp"
#include "SuperTrap.class.hpp"

int			main(void)
{
	SuperTrap	sup3r_tp("sup3r_tp");
	std::cout << std::endl;
	SuperTrap	supertrap("supertrap");
	std::cout << std::endl;
	ClapTrap	claptrap("claptrap");
	std::cout << std::endl;
	FragTrap	fragtrap("fragtrap");
	std::cout << std::endl;
	NinjaTrap	ninjatrap("ninjatrap");
	std::cout << std::endl;

	supertrap.meleeAttack("CL4p-TP");
	sup3r_tp.takeDamage(supertrap.get_melee());
	supertrap.rangedAttack("CL4p-TP");
	sup3r_tp.takeDamage(supertrap.get_ranged());
	supertrap.vaulthunter_dot_exe("CL4P-TP");
	supertrap.vaulthunter_dot_exe("CL4P-TP");
	supertrap.vaulthunter_dot_exe("CL4P-TP");
	supertrap.vaulthunter_dot_exe("CL4P-TP");
	supertrap.vaulthunter_dot_exe("CL4P-TP");
	supertrap.vaulthunter_dot_exe("CL4P-TP");
	sup3r_tp.ninjaShoebox(fragtrap);
	sup3r_tp.ninjaShoebox(ninjatrap);
	supertrap.meleeAttack("CL4p-TP");
	sup3r_tp.takeDamage(supertrap.get_melee());
	supertrap.meleeAttack("CL4p-TP");
	sup3r_tp.takeDamage(supertrap.get_melee());
	sup3r_tp.beRepaired(10);
	sup3r_tp.beRepaired(100);
	supertrap.meleeAttack("CL4p-TP");
	sup3r_tp.takeDamage(supertrap.get_melee());
	supertrap.meleeAttack("CL4p-TP");
	sup3r_tp.takeDamage(supertrap.get_melee());
	supertrap.meleeAttack("CL4p-TP");
	sup3r_tp.takeDamage(supertrap.get_melee());
	std::cout << std::endl << std::endl << std::endl;

}
