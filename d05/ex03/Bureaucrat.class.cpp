/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 11:30:11 by trecomps          #+#    #+#             */
/*   Updated: 2017/03/29 16:01:30 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"

Bureaucrat::Bureaucrat(void) : _name("Jim"), _grade(0)
{
	//std::cout << "Default constructor called" << std::endl;

	return ;
}

Bureaucrat::Bureaucrat(std::string name, int const grade) :
			_name(name), _grade(0)
{
	//std::cout << "Parametric constructor called" << std::endl;
	this->_setGrade(grade);

	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return ;
}

Bureaucrat::~Bureaucrat(void)
{
	//std::cout << "Destructor called" << std::endl;
	
	return ;
}

const char	*Bureaucrat::GradeTooHightException::what(void) const throw()
{
	return ("The grade is too hight");
}

const char	*Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("The grade is too low");
}

int					Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void					Bureaucrat::_setGrade(int newGrade)
{
	if (newGrade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (newGrade < 1)
		throw Bureaucrat::GradeTooHightException();
	else
		this->_grade = newGrade;
}

void					Bureaucrat::incGrade(void)
{
	this->_setGrade(this->getGrade() - 1);
}

void					Bureaucrat::decGrade(void)
{
	this->_setGrade(this->getGrade() + 1);
}

std::string const		&Bureaucrat::getName(void) const
{
	return(this->_name);
}

void			Bureaucrat::executeForm(Form const &form)
{
	try
	{
		form.execute(*this);
		std::cout << *this << " executes " << form;
	}
	catch (std::exception &e)
	{
		std::cout << *this << " can't execute " << form << " because "
			<< e.what() << std::endl;
	}
}

void			Bureaucrat::signForm(Form &toSign) const
{
	try
	{
		toSign.beSigned(*this);
		std::cout << *this << " signs " << toSign;
	}
	catch (std::exception &e)
	{
		std::cout << *this << " cannot sign " << toSign << " because "
			<< e.what() << std::endl;
	}
}

Bureaucrat		&Bureaucrat::operator=(Bureaucrat const &rhs)
{
	//std::cout << "Assignement operator called" << std::endl;

	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_grade = rhs.getGrade();
	}
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &i)
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade()
		<< std::endl;

	return (o);
}
