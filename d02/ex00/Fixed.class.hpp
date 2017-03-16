/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 17:07:28 by                   #+#    #+#             */
/*   Updated: 2017/03/14 17:23:02 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H

#include <iostream>

class Fixed {

public :

	Fixed(void);
	Fixed(int const n);
	Fixed(Fixed const &rhs);
	~Fixed(void);

	Fixed	&operator=(Fixed const &rhs);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

private :

	int					_fixed_val;
	static int const	_fractional_bit;

};

std::ostream		&operator<<(std::ostream &o, Fixed const &i);

#endif
