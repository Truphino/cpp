/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 12:54:46 by trecomps          #+#    #+#             */
/*   Updated: 2017/03/27 13:12:00 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_CLASS_H
# define VICTIM_CLASS_H

#include <iostream>

class Victim {

public :

	Victim(void);
	Victim(std::string const n);
	Victim(Victim const &rhs);
	~Victim(void);

	Victim	&operator=(Victim const &rhs);

	std::string		get_name() const;

	virtual void	getPolymorphed(void) const;

private :

	std::string		_name;

};

std::ostream		&operator<<(std::ostream &o, Victim const &i);

#endif
