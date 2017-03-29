/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 12:37:17 by trecomps          #+#    #+#             */
/*   Updated: 2017/03/27 13:06:48 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_CLASS_H
# define SORCERER_CLASS_H

#include <iostream>
#include "Victim.class.hpp"

class Sorcerer {

public :

	Sorcerer(std::string name, std::string title);
	Sorcerer(Sorcerer const &rhs);
	~Sorcerer(void);

	Sorcerer	&operator=(Sorcerer const &rhs);

	std::string		get_title(void) const;
	std::string		get_name(void) const;

	void			polymorph(Victim const &victim) const;

private :
	Sorcerer(void);

	std::string		_name;
	std::string		_title;

};

std::ostream		&operator<<(std::ostream &o, Sorcerer const &i);

#endif
