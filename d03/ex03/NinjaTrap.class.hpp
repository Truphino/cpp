/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scavtrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 09:41:28 by trecomps          #+#    #+#             */
/*   Updated: 2018/04/12 15:02:00 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_CLASS_H 
# define  NINJATRAP_CLASS_H 

#include "ClapTrap.class.hpp"
#include "FragTrap.class.hpp"
#include "ScavTrap.class.hpp"
#include <iostream>

class NinjaTrap : public ClapTrap
{

public :

	NinjaTrap(void);
	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap const &rhs);
	~NinjaTrap(void);

	void				ninjaShoebox(NinjaTrap const &rhs);
	void				ninjaShoebox(FragTrap const &rhs);
	void				ninjaShoebox(ScavTrap const &rhs);
};

#endif
