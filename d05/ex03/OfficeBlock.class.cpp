/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 15:07:43 by trecomps          #+#    #+#             */
/*   Updated: 2017/03/29 16:04:11 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.class.hpp"

OfficeBlock::OfficeBlock(void) : _intern(NULL), _signer(NULL), _executor(NULL)
{
	return ;
}

OfficeBlock::OfficeBlock(Intern *intern, Bureaucrat *signer,
			Bureaucrat *executor) : _intern(intern),
			_signer(signer), _executor(executor)
{
	return ;
}

OfficeBlock::~OfficeBlock(void)
{
	//std::cout << "Destructor called" << std::endl;
	
	return ;
}

const char	*OfficeBlock::NoIntern::what() const throw()
{
	return ("We can't create form whithout inter :(");
}

const char	*OfficeBlock::NoSigner::what() const throw()
{
	return ("We can't sign form whithout signer");
}

const char	*OfficeBlock::NoExecutor::what() const throw()
{
	return ("We can't exectute form whithout executor");
}

void		OfficeBlock::setIntern(Intern *intern)
{
	this->_intern = intern;
}

void		OfficeBlock::setSigner(Bureaucrat *signer)
{
	this->_signer = signer;
}

void		OfficeBlock::setExecutor(Bureaucrat *executor)
{
	this->_executor = executor;
}

bool		OfficeBlock::_isFull(void) const
{
	if (this->_intern == NULL)
		throw NoIntern();
	else if (this->_signer == NULL)
		throw NoSigner();
	else if (this->_executor == NULL)
		throw NoExecutor();
	else
		return (true);
	return (false);
}

void		OfficeBlock::doBureaucracy(std::string formType,
											std::string target) const
{
	Form	*newForm;

	if (this->_isFull())
	{
		newForm = this->_intern->makeForm(formType, target);
		if (newForm == NULL)
			throw Intern::UnknowFormType();
		try {this->_signer->signForm(*newForm);}
		catch (std::exception &e)
		{
			delete newForm;
			throw e;
		};
		try {this->_executor->executeForm(*newForm);}
		catch (std::exception &e)
		{
			delete newForm;
			throw e;
		}
		delete newForm;
	};
}
