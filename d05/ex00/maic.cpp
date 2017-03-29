/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maic.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 12:19:02 by trecomps          #+#    #+#             */
/*   Updated: 2017/03/29 12:22:14 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"

int		main(void)
{
	try
	{
		Bureaucrat		john("John", 1);

		std::cout << john;
		john.incGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
