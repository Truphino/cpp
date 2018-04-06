/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 15:44:38 by trecomps          #+#    #+#             */
/*   Updated: 2018/04/06 17:11:11 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.class.hpp"

Brain::Brain(void)
{
	//std::cout << "Default constructor called" << std::endl;
	return ;
}

Brain::Brain(Brain const &src)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return ;
}

Brain::~Brain(void)
{
	//std::cout << "Destructor called" << std::endl;

	return ;
}

std::string		Brain::identify(void) const
{
	const void *adress = static_cast<const void *>(this);
	std::ostringstream		str;

	str << adress;
	return (str.str());
}
