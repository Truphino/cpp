/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 12:31:54 by trecomps          #+#    #+#             */
/*   Updated: 2018/04/06 12:49:52 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_CLASS_H
# define ZOMBIE_CLASS_H

#include <iostream>

class Zombie {

public :

	Zombie(void);
	Zombie(std::string name, std::string type);
	Zombie(Zombie const &rhs);
	~Zombie(void);

	Zombie	&operator=(Zombie const &rhs);

	std::string					get_type(void) const;
	std::string					get_name(void) const;
	void						announce(void) const;

private :
	std::string					_name;
	std::string					_type;

};

std::ostream		&operator<<(std::ostream &o, Zombie const &i);

#endif
