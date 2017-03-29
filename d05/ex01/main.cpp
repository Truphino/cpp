/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maic.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 12:19:02 by trecomps          #+#    #+#             */
/*   Updated: 2017/03/29 13:03:38 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"
#include "Form.class.hpp"

int		main(void)
{
	try
	{
		Bureaucrat		john("John", 11);
		Form			form(10, 150);

		std::cout << john;
		std::cout << form;
		john.incGrade();
		john.signForm(form);
		john.incGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
