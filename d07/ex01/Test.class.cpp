/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Test.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 10:43:09 by trecomps          #+#    #+#             */
/*   Updated: 2017/04/06 11:10:26 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Test.class.hpp"

Test::Test(void) : _foo(0), _bar(42)
{
	//std::cout << "Default constructor called" << std::endl;

	return ;
}

Test::Test(int const foo, int const bar) : _foo(foo), _bar(bar)
{
	//std::cout << "Parametric constructor called" << std::endl;

	return ;
}

Test::Test(Test const &src)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return ;
}

Test::~Test(void)
{
	//std::cout << "Destructor called" << std::endl;
	
	return ;
}

void		Test::setParam(const int foo, const int bar)
{
	this->_foo = foo;
	this->_bar = bar;
}

int			Test::getFoo(void) const
{
	return (this->_foo);
}

int			Test::getBar(void) const
{
	return (this->_bar);
}

Test		&Test::operator=(Test const &rhs)
{
	//std::cout << "Assignement operator called" << std::endl;

	if (this != &rhs)
	{
		this->_foo = rhs.getFoo();
		this->_bar = rhs.getBar();
	}
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Test const &i)
{
	o << "Foo : " << i.getFoo() << ", Bar : " << i.getBar() << std::endl;

	return (o);
}
