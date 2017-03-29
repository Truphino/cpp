/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 12:25:39 by trecomps          #+#    #+#             */
/*   Updated: 2017/03/29 13:03:16 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.class.hpp"

Form::Form(void) : _signed(false), _signGrade(1), _execGrade(1)
{
	//std::cout << "Default constructor called" << std::endl;

	return ;
}

Form::Form(int const signGrade, int const execGrade) :
			_signed(false)
{
	//std::cout << "Parametric constructor called" << std::endl;
	this->_verifGrade(signGrade);
	this->_signGrade = signGrade;
	this->_verifGrade(execGrade);
	this->_execGrade = execGrade;

	return ;
}

Form::Form(Form const &src)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return ;
}

Form::~Form(void)
{
	//std::cout << "Destructor called" << std::endl;
	
	return ;
}

const char	*Form::GradeTooHightException::what(void) const throw()
{
	return ("The grade is too hight");
}

const char	*Form::GradeTooLowException::what(void) const throw()
{
	return ("The grade is too low");
}

void		Form::_verifGrade(int grade) const
{
	if (grade > 150)
		throw Form::GradeTooLowException();
	else if (grade < 1)
		throw Form::GradeTooHightException();
}

void		Form::_canSign(int grade) const
{
	if (grade > this->getSignGrade())
		throw Form::GradeTooLowException();
}

int			Form::getSignGrade(void) const
{
	return (this->_signGrade);
}

int			Form::getExecGrade(void) const
{
	return (this->_signGrade);
}

bool		Form::isItSigned(void) const
{
	return (this->_signed);
}

void		Form::beSigned(Bureaucrat const &signer)
{
	this->_canSign(signer.getGrade());
	this->_signed = true;
}

Form		&Form::operator=(Form const &rhs)
{
	//std::cout << "Assignement operator called" << std::endl;

	if (this != &rhs)
	{
		this->_signed = rhs.isItSigned();
		this->_signGrade = rhs.getSignGrade();
		this->_execGrade = rhs.getExecGrade();
	}
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Form const &i)
{
	o << "Form sign grade: " << i.getSignGrade()
		<< " Execute grade: " << i.getExecGrade();
	if (i.isItSigned())
		o << " (signed)";
	else
		o << " (not signed)";
	o << std::endl;

	return (o);
}
