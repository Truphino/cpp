/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 11:13:16 by trecomps          #+#    #+#             */
/*   Updated: 2017/04/06 12:29:23 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./Array.temp.hpp"
#include "./Test.class.hpp"

int			main(void)
{
	Array<Test>		array(8);
	Array<Test>		array2;
	unsigned int	i = 0;

	array[0].setParam(41, 59);
	array[1].setParam(94, 5);
	array[2].setParam(12, 65);
	array[3].setParam(18, 2);
	array[4].setParam(123, 485);
	array[5].setParam(4, 54);
	array[6].setParam(486, 1);
	array[7].setParam(48, 36);
	Array<Test>		array3(array);
	array2 = array;

	array2[0].setParam(42, 42);
	array3[1].setParam(42, 42);

	while (i < array.size())
	{
		try
		{
			std::cout << "Array 1 : " << array[i];
			std::cout << "Array 2 : " << array2[i];
			std::cout << "Array 3 : " << array3[i] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		i++;
	}
}
