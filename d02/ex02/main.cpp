/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 18:08:54 by                   #+#    #+#             */
/*   Updated: 2018/04/11 11:40:31 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <bitset>
#include <cmath>
#include <limits>
#include <string>
#include "Fixed.class.hpp"

int
main( void )
{
	Fixed const b( 11.1f);
	Fixed const c( 10.2f );

	if (b < c)
		std::cout << b << " < " << c << std::endl;
	else
		std::cout << b << " > " << c << std::endl;

	return 0;
}
