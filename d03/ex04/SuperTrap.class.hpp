/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 10:43:30 by trecomps          #+#    #+#             */
/*   Updated: 2017/03/27 12:05:40 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_CLASS_H
# define SUPERTRAP_CLASS_H

#include "FragTrap.class.hpp"
#include "NinjaTrap.class.hpp"
#include <iostream>

class SuperTrap : public FragTrap, public NinjaTrap
{

public :

	SuperTrap(void);
	SuperTrap(std::string name);
	SuperTrap(SuperTrap const &rhs);
	~SuperTrap(void);

};
#endif
