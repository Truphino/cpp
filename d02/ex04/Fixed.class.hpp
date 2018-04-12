/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 17:07:28 by                   #+#    #+#             */
/*   Updated: 2018/04/12 12:16:30 by trecomps         ###   ########.fr       */
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
	Fixed	&operator++();
	Fixed	operator++(int);
	Fixed	&operator--();
	Fixed	operator--(int);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	static Fixed const			&min(Fixed const &a, Fixed const &b);
	static Fixed				&min(Fixed &a, Fixed &b);
	static Fixed const			&max(Fixed const &a, Fixed const &b);
	static Fixed				&max(Fixed &a, Fixed &b);

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
Fixed				operator-(Fixed const &a, Fixed const &b);
Fixed				operator/(Fixed const &a, Fixed const &b);
Fixed				operator*(Fixed const &a, Fixed const &b);

#endif
