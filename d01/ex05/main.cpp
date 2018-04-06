/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 15:48:09 by trecomps          #+#    #+#             */
/*   Updated: 2018/04/06 17:08:18 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.class.hpp"
#include <iostream>

int		main(void)
{
	Human		paul;

	paul.brain_addr();
	std::cout << paul.identify() << std::endl;
	std::cout << paul.getBrain().identify() << std::endl;
}
