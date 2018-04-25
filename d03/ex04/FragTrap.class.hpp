/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 10:43:30 by trecomps          #+#    #+#             */
/*   Updated: 2018/04/25 10:41:34 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CLASS_H
# define FRAGTRAP_CLASS_H

#include "ClapTrap.class.hpp"
#include <iostream>

class FragTrap : public virtual ClapTrap
{

public :

	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap const &rhs);
	~FragTrap(void);

	void					vaulthunter_dot_exe(std::string const &target);
};
#endif
