/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 15:18:29 by trecomps          #+#    #+#             */
/*   Updated: 2018/04/06 15:33:18 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIEHORDE_CLASS_H
# define ZOMBIEHORDE_CLASS_H

#include <iostream>
#include "Zombie.class.hpp"

class ZombieHorde {

public :

	ZombieHorde(unsigned int const n);
	~ZombieHorde(void);

	ZombieHorde	&operator=(ZombieHorde const &rhs);

	int		get_count(void) const;
	void	announce(void) const;

private :
	unsigned int		_count;
	Zombie	*_members;

};

std::ostream		&operator<<(std::ostream &o, ZombieHorde const &i);

#endif
