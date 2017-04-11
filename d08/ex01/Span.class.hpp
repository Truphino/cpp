/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 11:57:43 by trecomps          #+#    #+#             */
/*   Updated: 2017/04/11 13:26:49 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_CLASS_H
# define SPAN_CLASS_H

#include <iostream>
#include <array>
#include <vector>

class Span {

public :

	Span(unsigned int const n);
	Span(Span const &rhs);
	~Span(void);

	Span	&operator=(Span const &rhs);
	unsigned int	&operator[](unsigned int idx);
	const unsigned int	&operator[](unsigned int idx) const;

	unsigned int					getSize() const;
	unsigned int					getActualSize() const;
	const std::vector<unsigned int>	&getVector() const;
	const std::vector<unsigned int>	&getSorted() const;

	void							addNumber(unsigned  int);
	unsigned int					shortestSpan(void) const;
	unsigned int					longestSpan(void) const;

private :

	Span(void);
	unsigned int				_size;
	unsigned int				_actual_size;
	std::vector<unsigned int>	_vec;
	std::vector<unsigned int>	_sorted;

};

std::ostream		&operator<<(std::ostream &o, Span const &i);

#endif
