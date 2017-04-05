/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 15:06:03 by trecomps          #+#    #+#             */
/*   Updated: 2017/03/29 15:53:08 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OFFICEBLOK_CLASS_H
# define OFFICEBLOK_CLASS_H

#include <iostream>
#include "Bureaucrat.class.hpp"
#include "Intern.class.hpp"

class Bureaucrat;
class Intern;

class OfficeBlock {

public :

	class NoIntern : public std::exception
	{
		virtual const char* what() const throw();
	};

	class NoSigner : public std::exception
	{
		virtual const char* what() const throw();
	};

	class NoExecutor : public std::exception
	{
		virtual const char* what() const throw();
	};

	OfficeBlock(void);
	OfficeBlock(Intern *intern, Bureaucrat *signer, Bureaucrat *executor);
	~OfficeBlock(void);

	void			setIntern(Intern *intern);
	void			setSigner(Bureaucrat *signer);
	void			setExecutor(Bureaucrat *executor);

	void			doBureaucracy(std::string formType,
									std::string target) const;

private :

	OfficeBlock(OfficeBlock const &rhs);
	OfficeBlock	&operator=(OfficeBlock const &rhs);
	bool			_isFull() const;

	Intern			*_intern;
	Bureaucrat		*_signer;
	Bureaucrat		*_executor;

};

#endif
