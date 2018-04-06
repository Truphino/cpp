/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 15:38:25 by trecomps          #+#    #+#             */
/*   Updated: 2018/04/06 15:41:17 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int			main(void)
{
	std::string		var = "HI THIS IS BRAIN";
	std::string		*ptr = &var;
	std::string		&ref = var;

	std::cout << var << std::endl;
	std::cout << *ptr << std::endl;
	std::cout << ref << std::endl;
}
