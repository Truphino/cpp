/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 11:26:08 by trecomps          #+#    #+#             */
/*   Updated: 2017/04/11 11:42:52 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

template <typename T>
typename T::iterator		easyfind(T &cont, int find)
{
	typename T::iterator	beg = cont.begin();
	typename T::iterator	end = cont.end();

	while (beg != end)
	{
		if (*beg == find)
			return (beg);
		else
			beg++;
	}
	return (end);
}

int			main(void)
{
	std::vector<int>				vect;
	std::vector<int>::iterator		it;

	vect.push_back(10);
	vect.push_back(20);
	vect.push_back(12);
	vect.push_back(1);
	vect.push_back(65);
	vect.push_back(32);
	vect.push_back(9);

	it = easyfind<std::vector <int> >(vect, 2);
	if (it != vect.end())
		std::cout << "Value found : " << *it << std::endl;
	else
		std::cout << "Value not found : " << *it <<  std::endl;
}
