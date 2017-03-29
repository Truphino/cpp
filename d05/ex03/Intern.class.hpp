/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Inter.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 14:21:25 by trecomps          #+#    #+#             */
/*   Updated: 2017/03/29 14:35:19 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_CLASS_H
# define CLASS_CLASS_H

#include <iostream>
#include "Form.class.hpp"
#include "RobotomyRequestForm.class.hpp"
#include "ShrubberyCreationForm.class.hpp"
#include "PresidentialPardonForm.class.hpp"

class Intern {

public :

	class UnknowFormType : public std::exception
	{
		virtual const char* what() const throw();
	};

	Intern(void);
	~Intern(void);

	Form		*makeForm(std::string const formType,
							std::string const target) const;

private :

	Intern(Intern const &rhs);
	Intern	&operator=(Intern const &rhs);
	Form		*_createForm(std::string const formType,
							std::string const target) const;

};


#endif
