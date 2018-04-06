/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 14:05:40 by trecomps          #+#    #+#             */
/*   Updated: 2018/04/06 14:33:22 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIEEVENT_CLASS_H
# define ZOMBIEEVENT_CLASS_H

# include <iostream>
# include "Zombie.class.hpp"

class ZombieEvent {

public :

	ZombieEvent(void);
	ZombieEvent(std::string const type);
	ZombieEvent(ZombieEvent const &rhs);
	~ZombieEvent(void);

	ZombieEvent	&operator=(ZombieEvent const &rhs);

	std::string		get_type(void) const;
	void			setZombieType(std::string type);
	Zombie			*newZombie(std::string name);
	void			randomChump(void) const;

private :
	std::string			_type;
	static const std::string	_name_table[5];

};

std::ostream		&operator<<(std::ostream &o, ZombieEvent const &i);

#endif
