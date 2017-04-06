/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 10:24:08 by trecomps          #+#    #+#             */
/*   Updated: 2017/04/06 10:37:27 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void		swap(T &a, T &b)
{
	T		tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T			min(T &a, T &b)
{
	return ((a < b) ? a : b);
}

template <typename T>
T			max(T &a, T &b)
{
	return ((a > b) ? a : b);
}

int			main(void)
{
	int		a = 21;
	int		b = 42;

	std::string		c = "chaine1";
	std::string		d = "chaine2";

	std::cout << "A : " << a << ", B : " << b << std::endl;
	::swap(a, b);
	std::cout << "A : " << a << ", B : " << b << std::endl;
	std::cout << "Max : " << ::max(a, b) << std::endl;
	std::cout << "Min : " << ::min(a, b) << std::endl;

	std::cout << "C : " << c << ", D : " << d << std::endl;
	::swap(c, d);
	std::cout << "C : " << c << ", B : " << d << std::endl;
	std::cout << "Max : " << ::max(c, d) << std::endl;
	std::cout << "Min : " << ::min(c, d) << std::endl;

}
