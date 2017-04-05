/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 12:25:13 by trecomps          #+#    #+#             */
/*   Updated: 2017/03/29 15:24:04 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_CLASS_H
# define FORM_CLASS_H

#include <iostream>
#include <fstream>
#include "Bureaucrat.class.hpp"

class Bureaucrat;

class Form {

public :

	class GradeTooHightException : public std::exception
	{
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		virtual const char* what() const throw();
	};

	class FormNotSignedException : public std::exception
	{
		virtual const char* what() const throw();
	};

	Form(void);
	Form(int const signGrade, int const execGrade, std::string target,
			std::string formType);
	Form(Form const &rhs);
	virtual ~Form(void);

	Form	&operator=(Form const &rhs);

	int		getSignGrade(void) const;
	int		getExecGrade(void) const;
	bool	isItSigned(void) const;
	void	beSigned(Bureaucrat const &signer);
	std::string		getTarget(void) const;
	std::string		getType(void) const;

	virtual void		execute(Bureaucrat const &executor) const = 0;

private :

	void		_verifGrade(int grade) const;
	void		_canSign(int grade) const;

	bool		_signed;
	int			_signGrade;
	int			_execGrade;
	std::string	_target;
	std::string	_formType;

protected :

	bool				canExec(Bureaucrat const &executor) const;

};

std::ostream		&operator<<(std::ostream &o, Form const &i);

#endif
