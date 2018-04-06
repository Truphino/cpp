/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 15:49:03 by trecomps          #+#    #+#             */
/*   Updated: 2018/04/06 17:10:31 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.class.hpp"

Human::Human(void)
{
	//std::cout << "Default constructor called" << std::endl;

	return ;
}

Human::~Human(void)
{
	//std::cout << "Destructor called" << std::endl;

	return ;
}

std::string		Human::identify(void) const
{
	return (this->_brain.identify());
}

const Brain		&Human::getBrain(void)
{
	return (this->_brain);
}

void		Human::brain_addr(void)
{
	std::cout << &(this->_brain) << std::endl;
}
