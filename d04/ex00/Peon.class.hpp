/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 13:08:44 by trecomps          #+#    #+#             */
/*   Updated: 2017/03/27 13:12:05 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_CLASS_H
# define PEON_CLASS_H

#include <iostream>
#include "Victim.class.hpp"

class Peon : public Victim {

public :

	Peon(void);
	Peon(std::string name);
	Peon(Peon const &rhs);
	~Peon(void);

	virtual void	getPolymorphed(void) const;

};

#endif
