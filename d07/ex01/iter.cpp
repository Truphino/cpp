/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 10:39:20 by trecomps          #+#    #+#             */
/*   Updated: 2017/04/06 11:11:16 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Test.class.hpp"

template <typename T>
void		print_it(T &c)
{
	std::cout << c << std::endl;
}

template <typename T>
void		iter(T *array, unsigned const int lenght, void (*f)(T&))
{
	unsigned int	i;

	i = 0;
	while (i < lenght)
	{
		f(array[i]);
		i++;
	}
}

int			main(void)
{
	Test	tab[5];

	tab[0].setParam(1,2);
	tab[1].setParam(11,22);
	tab[2].setParam(111,222);
	tab[3].setParam(1111,2222);
	tab[4].setParam(11111,22222);
	iter<Test>(tab, 5, print_it);
}
