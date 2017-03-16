/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 18:08:54 by                   #+#    #+#             */
/*   Updated: 2017/03/14 18:42:31 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <bitset>
#include <cmath>
#include <limits>
#include <string>

int			main(void)
{
	int				intPart;
	//int				fracPart;
	double			frac;
	double			d = 3.14;

	intPart = roundf(d);
	frac = d - intPart;
	frac *= 100;

	std::cout << "d:" << d << std::endl;
	std::cout << "int:" << intPart << std::endl;
	std::cout << "dec:" << frac << std::endl;
}
