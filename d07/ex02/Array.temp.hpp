/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.temp.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 11:21:59 by trecomps          #+#    #+#             */
/*   Updated: 2017/04/06 12:24:13 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TEMP_H
# define ARRAY_TEMP_H

#include <iostream>

template<typename T>
class Array {

public :

	Array(void) : _size(0), _array(NULL)
	{
		return ;
	};

	Array(unsigned const int size) : _size(size)
	{
		this->_array = new T[this->_size];
	};

	Array(Array const &rhs)
	{
		*this = rhs;
	};

	~Array(void){};

	Array	&operator=(Array const &rhs)
	{
		unsigned int		i = 0;

		if (this != &rhs)
		{
			this->_size = rhs.size();
			this->_array = new T[this->_size];
			while (i < this->_size)
			{
				this->_array[i] = rhs[i];
				i++;
			}
		}
		return (*this);
	}

	T		&operator[](unsigned const int index) const
	{
		if (index >= this->_size)
			throw std::out_of_range("OOB mgl");
		else
			return (this->_array[index]);
	};

	unsigned int	size(void) const {
		return (this->_size);
	}

private :

	unsigned int		_size;
	T					*_array;

};

//std::ostream		&operator<<(std::ostream &o, Array const &i);

#endif
