/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maic.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 12:19:02 by trecomps          #+#    #+#             */
/*   Updated: 2017/03/29 16:02:10 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"
#include "ShrubberyCreationForm.class.hpp"
#include "RobotomyRequestForm.class.hpp"
#include "PresidentialPardonForm.class.hpp"
#include "Form.class.hpp"
#include "Intern.class.hpp"
#include "OfficeBlock.class.hpp"

int		main(void)
{
	Intern		idiot;
	Bureaucrat	signer("signer", 73);
	Bureaucrat	executor("executor", 23);
	OfficeBlock	office1;

	office1.setIntern(&idiot);
	office1.setSigner(&signer);
	office1.setExecutor(&executor);
	try
	{
		office1.doBureaucracy("rbotomy request", "claptrap");
		signer.incGrade();
		office1.doBureaucracy("rbotomy request", "claptrap");
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
