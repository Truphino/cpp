/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 11:58:00 by trecomps          #+#    #+#             */
/*   Updated: 2017/04/11 13:36:00 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.class.hpp"

Span::Span(unsigned int const n) : _size(n), _actual_size(0), _vec(n, INT_MAX),
									_sorted(_vec)
{
	std::sort(this->_sorted.begin(), this->_sorted.end());

	return ;
}

Span::Span(Span const &src)
{
	*this = src;

	return ;
}

Span::~Span(void)
{
	return ;
}

unsigned int	Span::getSize() const
{
	return (this->_size);
}

unsigned int	Span::getActualSize() const
{
	return (this->_actual_size);
}

const std::vector<unsigned int>	&Span::getVector() const
{
	return (this->_vec);
}

const std::vector<unsigned int>	&Span::getSorted() const
{
	return (this->_sorted);
}

unsigned int		&Span::operator[](unsigned int idx)
{
	if (idx >= this->_actual_size)
		throw std::out_of_range("OOB (is this Portal ?)");
	else
		return (this->_vec[idx]);
}

const unsigned int		&Span::operator[](unsigned int idx) const
{
	if (idx >= this->_actual_size)
		throw std::out_of_range("OOB (is this Metroid Prime ?)");
	else
		return (this->_vec[idx]);
}

Span		&Span::operator=(Span const &rhs)
{
	if (this != &rhs)
	{
		this->_size = rhs.getSize();
		this->_actual_size = rhs.getActualSize();
		this->_vec = std::vector<unsigned int>(rhs.getVector());
		this->_sorted = std::vector<unsigned int>(rhs.getSorted());
	}
	return (*this);
}

void			Span::addNumber(unsigned int const n)
{
	if (this->_actual_size < this->_size)
	{
		this->_actual_size++;
		this->_vec[this->_actual_size - 1] = n;
		this->_sorted = _vec;
		std::sort(this->_sorted.begin(), this->_sorted.end());
	}
	else
		throw std::out_of_range("Span is full");
}

unsigned int	Span::shortestSpan(void) const
{
	int				span = INT_MAX;
	int				tmp = 0;
	unsigned int	index = 0;

	if (this->_actual_size < 2)
		throw std::range_error("Not enought element to compute span");
	while (index < this->_actual_size - 1)
	{
		tmp = this->_sorted[index] - (this->_sorted[index] + 1);
		if (tmp < 0)
			tmp = -tmp;
		if (tmp < span)
			span = tmp;
		index++;
	}
	return (span);
}

unsigned int	Span::longestSpan(void) const
{
	int		span;

	if (this->_actual_size < 2)
		throw std::range_error("Not enought element to compute span");
	span = this->_sorted[0] - this->_sorted[this->_actual_size - 1];
	if (span < 0)
		span = -span;
	return (span);
};

std::ostream	&operator<<(std::ostream &o, Span const &i)
{
	unsigned int	idx;

	idx = 0;
	while (idx < i.getActualSize())
	{
		o << i[idx] << std::endl;
		idx++;
	}
	return (o);
}
