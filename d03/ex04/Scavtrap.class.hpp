/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scavtrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 09:41:28 by trecomps          #+#    #+#             */
/*   Updated: 2018/04/25 10:43:19 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_CLASS_H
# define SCAVTRAP_CLASS_H

#include "ClapTrap.class.hpp"
#include <iostream>

class ScavTrap : public virtual ClapTrap
{

public :

	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &rhs);
	~ScavTrap(void);

	void					challengeNewcomer(void);
};

#endif
