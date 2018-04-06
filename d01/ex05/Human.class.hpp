/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 15:49:01 by trecomps          #+#    #+#             */
/*   Updated: 2018/04/06 17:11:29 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_CLASS_H
# define HUMAN_CLASS_H

#include <iostream>
#include "Brain.class.hpp"

class Human {

public :

	Human(void);
	~Human(void);

	std::string		identify() const;
	const Brain		&getBrain();
	void			brain_addr(void);

private :
	const Brain		_brain;
};

#endif
