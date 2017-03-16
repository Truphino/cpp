/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 12:30:11 by                   #+#    #+#             */
/*   Updated: 2017/03/14 12:52:34 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.class.hpp"
#include <iostream>

Pony::Pony(std::string pname, std::string pcolor, int pheight) : 
			name(pname), color(pcolor), height(pheight)
{
	std::cout << this->name << " is born!" << std::endl;
	std::cout << "It color is " << this->color << " and it height is "
			<< this->height << " bananas" << std::endl;
}

Pony::~Pony(void)
{
	std::cout << this->name << " died :(" << std::endl;
}

void			Pony::jump_it(int jump_height)
{
	std::cout << this->name << " just jump " << jump_height << " meters !"
				<< std::endl;
}
