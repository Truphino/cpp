/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 11:29:46 by trecomps          #+#    #+#             */
/*   Updated: 2017/03/29 12:22:48 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_CLASS_H
# define BUREAUCRAT_CLASS_H

#include <iostream>

class Bureaucrat {

public :

	class GradeTooHightException : public std::exception
	{
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		virtual const char* what() const throw();
	};

	Bureaucrat(void);
	Bureaucrat(std::string name, int const grade);
	Bureaucrat(Bureaucrat const &rhs);
	~Bureaucrat(void);

	Bureaucrat	&operator=(Bureaucrat const &rhs);

	int					getGrade(void) const;
	void				incGrade(void);
	void				decGrade(void);
	std::string const	&getName(void) const;

private :

	void				_setGrade(int newGrade);
	std::string			_name;
	int					_grade;

};

std::ostream		&operator<<(std::ostream &o, Bureaucrat const &i);

#endif
