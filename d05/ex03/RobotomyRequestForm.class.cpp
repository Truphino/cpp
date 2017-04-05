/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.class.cpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 13:10:38 by trecomps          #+#    #+#             */
/*   Updated: 2017/03/29 15:00:08 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.class.hpp"
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
		Form(72, 45, target, "Robotomy Request")
{
	//std::cout << "Default constructor called" << std::endl;

	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	//std::cout << "Destructor called" << std::endl;
	
	return ;
}

void			RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	int			succes;

	if (this->canExec(executor))
	{
		std::cout << "*Tchhhh pwow tchhh pow pow pow*" << std::endl;

		srand(std::time(NULL));
		succes = rand() % 2;
		if (succes == 0)
			std::cout << this->getTarget() << " has been robotomized."
				<< std::endl;
		else
			std::cout << this->getTarget() << "'s robotomization FAILED."
				<< std::endl;
	}
}
