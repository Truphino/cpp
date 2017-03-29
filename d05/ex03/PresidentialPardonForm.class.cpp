/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.class.cpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 13:10:38 by trecomps          #+#    #+#             */
/*   Updated: 2017/03/29 13:55:22 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.class.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
		Form(25, 5, target)
{
	//std::cout << "Default constructor called" << std::endl;

	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	//std::cout << "Destructor called" << std::endl;
	
	return ;
}

void			PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (this->canExec(executor))
	{
		std::cout << this->getTarget() << " has been pardoned by "
			<< "Zafod Beeblebrox." << std::endl;
	}
}
