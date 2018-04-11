/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 10:35:22 by trecomps          #+#    #+#             */
/*   Updated: 2018/04/11 12:09:34 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

const int			Fixed::fractional_bit = 8;

Fixed::Fixed(void) : _fixed_val(0)
{
//	std::cout << "Default constructor called" << std::endl;

	return ;
}

Fixed::Fixed(int const n)
{
//	std::cout << "Int constructor called" << std::endl;
	if (((n << fractional_bit) >> fractional_bit) != n)
		std::cout << "Fixed point lost data" << std::endl;
	this->_fixed_val = n << this->fractional_bit;

	return ;
}

Fixed::Fixed(float const n)
{
	double		pow_fract;

//	std::cout << "Float constructor called" << std::endl;
	pow_fract = n * static_cast<float>(1 << fractional_bit);
	this->_fixed_val = roundf(pow_fract);

	return ;
}

Fixed::Fixed(Fixed const &src)
{
//	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return ;
}

Fixed::~Fixed(void)
{
//	std::cout << "Destructor called" << std::endl;

	return ;
}

int			Fixed::getRawBits(void) const
{
//	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed_val);
}

void		Fixed::setRawBits(int const raw)
{
	this->_fixed_val = raw;

	return ;
}

float		Fixed::toFloat(void) const
{
	return (this->_fixed_val / static_cast<float>(1 << fractional_bit));
}

int			Fixed::toInt(void) const
{
	return (this->_fixed_val >> fractional_bit);
}

Fixed		&Fixed::operator=(Fixed const &rhs)
{
//	std::cout << "Assignation operator called" << std::endl;

	if (this != &rhs)
	{
		this->_fixed_val = rhs.getRawBits();
	}

	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &i)
{
	o << i.toFloat();

	return (o);
}

bool			operator<(Fixed const &a, Fixed const &b)
{
	return (a.getRawBits() < b.getRawBits());
}

bool			operator>(Fixed const &a, Fixed const &b)
{
	return (a.getRawBits() < b.getRawBits());
}

bool			operator==(Fixed const &a, Fixed const &b)
{
	return (a.getRawBits() == b.getRawBits());
}

bool			operator!=(Fixed const &a, Fixed const &b)
{
	return (a.getRawBits() != b.getRawBits());
}

bool			operator>=(Fixed const &a, Fixed const &b)
{
	return (a.getRawBits() > b.getRawBits() ||
			a.getRawBits() == b.getRawBits());
}

bool			operator<=(Fixed const &a, Fixed const &b)
{
	return (a.getRawBits() < b.getRawBits() ||
			a.getRawBits() == b.getRawBits());
}

Fixed			operator+(Fixed const &a, Fixed const &b)
{
	return (a.getRawBits() + b.getRawBits());
}

Fixed			operator-(Fixed const &a, Fixed const &b)
{
	return (a.getRawBits() - b.getRawBits());
}

Fixed			operator*(Fixed const &a, Fixed const &b)
{
	long		tmp;
	int			res;

	tmp = static_cast<long>(a.getRawBits()) * static_cast<long>(b.getRawBits());
	res = static_cast<int>(tmp >> Fixed::fractional_bit);
}
