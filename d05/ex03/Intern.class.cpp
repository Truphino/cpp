/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 14:22:36 by trecomps          #+#    #+#             */
/*   Updated: 2017/03/29 14:43:29 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.class.hpp"

Intern::Intern(void)
{
	return ;
}

Intern::~Intern(void)
{
	return ;
}

const char		*Intern::UnknowFormType::what() const throw()
{
	return ("Unknow Form type");
}

Form	*Intern::_createForm(std::string const formType,
		std::string const target) const
{
	if (formType == "robotomy request")
		return (new RobotomyRequestForm(target));
	else if (formType == "shrubbery creation")
		return (new ShrubberyCreationForm(target));
	else if (formType == "presidential pardon")
		return (new PresidentialPardonForm(target));
	else
		throw Intern::UnknowFormType();
}

Form	*Intern::makeForm(std::string const formType,
							std::string const target) const
{
	Form		*newForm;

	try
	{
		newForm = this->_createForm(formType, target);
		std::cout << "Intern creates " << *newForm << std::endl;
	}
	catch (std::exception &e)
	{
		newForm = NULL;
		std::cout << formType << "is an unknow form type" << std::endl;
	}
	return (newForm);
}
