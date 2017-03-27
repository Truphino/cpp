/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scavtrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 09:41:28 by trecomps          #+#    #+#             */
/*   Updated: 2017/03/27 11:31:52 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_CLASS_H 
# define  NINJATRAP_CLASS_H 

#include "ClapTrap.class.hpp"
#include <iostream>

class NinjaTrap : public ClapTrap
{

public :

	NinjaTrap(void);
	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap const &rhs);
	~NinjaTrap(void);

	void				ninjaShoebox(ClapTrap const &rhs);
};

#endif
