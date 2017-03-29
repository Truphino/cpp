/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 13:12:43 by trecomps          #+#    #+#             */
/*   Updated: 2017/03/27 13:20:38 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.class.hpp"

Peon::Peon(void) : Victim()
{
	std::cout << "Zog zog." << std::endl;

	return ;
}

Peon::Peon(std::string n) : Victim(n)
{
	std::cout << "Zog zog." << std::endl;

	return ;
}

Peon::Peon(Peon const &src)
{
	std::cout << "Zog zog." << std::endl;
	*this = src;

	return ;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;

	return ;
}

void				Peon::getPolymorphed(void) const
{
	std::cout << this->get_name() << " has been turned into a pink pony !"
		<< std::endl;
}
