/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.class.cpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 13:10:38 by trecomps          #+#    #+#             */
/*   Updated: 2017/03/29 15:00:27 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.class.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
		Form(145, 137, target, "Shrubbery Creation")
{
	//std::cout << "Default constructor called" << std::endl;

	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	//std::cout << "Destructor called" << std::endl;
	
	return ;
}

void			ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (this->canExec(executor))
	{
		std::ofstream	o(this->getTarget() + "_shrubbery");

		o << "    X\n";
		o << "   XXX\n";
		o << "  XXXXX\n";
		o << " XXXXXXX\n";
		o << "    X\n";
		o.close();
	}
}
