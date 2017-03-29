/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maic.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 12:19:02 by trecomps          #+#    #+#             */
/*   Updated: 2017/03/29 14:43:36 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"
#include "ShrubberyCreationForm.class.hpp"
#include "RobotomyRequestForm.class.hpp"
#include "PresidentialPardonForm.class.hpp"
#include "Form.class.hpp"
#include "Intern.class.hpp"

int		main(void)
{
	try
	{
		Bureaucrat		john("John", 46);
		Bureaucrat		president("Zafod", 1);
		Form			*s;
		Intern			someRandom;

		s = someRandom.makeForm("robotomy request", "Boss");
		std::cout << john;
		std::cout << *s << std::endl;;
		president.executeForm(*s);
		john.signForm(*s);
		john.executeForm(*s);
		john.incGrade();
		john.executeForm(*s);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
