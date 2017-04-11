/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 12:42:43 by trecomps          #+#    #+#             */
/*   Updated: 2017/04/11 13:38:28 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Span.class.hpp"

int			main(void)
{
	int		s = 1000;
	int		i = 0;
	Span	sp = Span(s);

	try
	{
		while (i < s)
		{
			sp.addNumber(i);
			i++;
		}

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
