/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 17:07:28 by                   #+#    #+#             */
/*   Updated: 2018/04/11 12:08:45 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H

#include <iostream>
#include <cmath>
#include <cstdbool>

class Fixed {

public :

	Fixed(void);
	Fixed(int const n);
	Fixed(float const n);
	Fixed(Fixed const &rhs);
	~Fixed(void);

	Fixed	&operator=(Fixed const &rhs);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	static int const	fractional_bit;

private :

	int					_fixed_val;

};

std::ostream		&operator<<(std::ostream &o, Fixed const &i);

bool				operator<(Fixed const &a, Fixed const &b);
bool				operator>(Fixed const &a, Fixed const &b);
bool				operator<=(Fixed const &a, Fixed const &b);
bool				operator>=(Fixed const &a, Fixed const &b);
bool				operator==(Fixed const &a, Fixed const &b);
bool				operator!=(Fixed const &a, Fixed const &b);

Fixed				operator+(Fixed const &a, Fixed const &b);

#endif
