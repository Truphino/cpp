/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 17:04:51 by                   #+#    #+#             */
/*   Updated: 2017/03/14 17:28:06 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

const int			Fixed::_fractional_bit = 8;

Fixed::Fixed(void) : _fixed_val(0)
{
	std::cout << "Default constructor called" << std::endl;

	return ;
}

Fixed::Fixed(int const n) : _fixed_val(n)
{
	std::cout << "Parametric constructor called" << std::endl;

	return ;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	
	return ;
}

int			Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed_val);
}

void		Fixed::setRawBits(int const raw)
{
	this->_fixed_val = raw;

	return ;
}

Fixed		&Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;

	if (this != &rhs)
	{
		this->_fixed_val = rhs.getRawBits();
	}

	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &i)
{
	o << "The value of _fixed_val is:" << i.getRawBits();

	return (o);
}
