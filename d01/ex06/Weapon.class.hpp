/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 17:27:41 by trecomps          #+#    #+#             */
/*   Updated: 2018/04/06 17:36:17 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS_H
# define WEAPON_CLASS_H

#include <iostream>

class Weapon {

public :

	Weapon(void);
	Weapon(std::string const type);
	Weapon(Weapon const &rhs);
	~Weapon(void);

	Weapon				&operator=(Weapon const &rhs);
	const std::string	&getType(void) const;
	void				setType(std::string const type);

private :
	std::string			_type;

};

std::ostream		&operator<<(std::ostream &o, Weapon const &i);

#endif
