/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 12:25:13 by trecomps          #+#    #+#             */
/*   Updated: 2017/03/29 12:58:51 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_CLASS_H
# define FORM_CLASS_H

#include <iostream>
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

	Form(void);
	Form(int const signGrade, int const execGrade);
	Form(Form const &rhs);
	~Form(void);

	Form	&operator=(Form const &rhs);

	int		getSignGrade(void) const;
	int		getExecGrade(void) const;
	bool	isItSigned(void) const;
	void	beSigned(Bureaucrat const &signer);

private :

	void		_verifGrade(int grade) const;
	void		_canSign(int grade) const;

	bool		_signed;
	int			_signGrade;
	int			_execGrade;

};

std::ostream		&operator<<(std::ostream &o, Form const &i);

#endif
