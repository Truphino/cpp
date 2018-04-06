/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 15:45:00 by trecomps          #+#    #+#             */
/*   Updated: 2018/04/06 17:11:15 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CLASS_H
# define BRAIN_CLASS_H

#include <iostream>
#include <sstream>

class Brain {

public :

	Brain(void);
	~Brain(void);

	std::string		identify(void) const;

private :
	Brain(Brain const &rhs);
};

#endif
