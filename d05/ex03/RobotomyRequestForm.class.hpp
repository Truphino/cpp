/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.class.hpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 13:08:59 by trecomps          #+#    #+#             */
/*   Updated: 2017/03/29 13:43:07 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_CLASS_H
# define ROBOTOMYREQUESTFORM_CLASS_H

#include <iostream>
#include "Form.class.hpp"

class RobotomyRequestForm : public Form
{

public :

	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const &rhs);
	virtual ~RobotomyRequestForm(void);

	virtual void	execute(Bureaucrat const &executor) const;

private :
	RobotomyRequestForm(void);

};

#endif
