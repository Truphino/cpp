/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Expr.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 11:06:43 by trecomps          #+#    #+#             */
/*   Updated: 2018/04/12 12:38:12 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Expr.class.hpp"

const int			Expr::debug = 0;

Expr::Expr(void) : _expr(""), _pos(_expr.begin())
{
	//std::cout << "Default constructor called" << std::endl;

	return ;
}

Expr::Expr(std::string const n) : _expr(this->delete_whitespace(n)),
	_pos(_expr.begin())
{
	//std::cout << "Parametric constructor called" << std::endl;

	return ;
}

Expr::Expr(Expr const &src)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return ;
}

Expr::~Expr(void)
{
	//std::cout << "Destructor called" << std::endl;
	
	return ;
}

std::string			Expr::getExpr(void) const
{
	return (this->_expr);
}

void				Expr::setExpr(std::string str)
{
	this->_expr = str;
	this->_pos = this->_expr.begin();
}

Expr		&Expr::operator=(Expr const &rhs)
{
	//std::cout << "Assignement operator called" << std::endl;

	if (this != &rhs)
	{
		this->_expr = rhs.getExpr();
		this->_pos = this->_expr.begin();
	}
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Expr const &i)
{
	o << i.getExpr();

	return (o);
}

char			Expr::get(void)
{
	return (*(this->_pos++));
}

char			Expr::peek(void) const
{
	return (*(this->_pos));
}

std::string		Expr::delete_whitespace(const std::string &string) const
{
	std::string			str = string;
	str.erase(std::remove(str.begin(), str.end(), ' '), str.end());

	return (str);
}

int				Expr::is_digit(void) const
{
	if (this->peek() >= '0' && this->peek() <= '9')
		return (1);
	else
		return (0);
}

int				Expr::is_number(void) const
{
	if ((this->peek() >= '0' && this->peek() <= '9') || this->peek() == '.')
		return (1);
	else
		return (0);
}

Fixed			Expr::number(void)
{
	int			d_part = 0;
	int			f_part = 0;
	int			f_part_length = 0;
	float		res;
	float		pow = 1;;

	if (debug)
		std::cout << "Number: " << this->peek() << std::endl;
	while (this->is_digit())
	{
		d_part = 10 * d_part + (this->get() - '0');
	}
	if (this->peek() == '.')
	{
		this->get();
		while (this->is_digit())
		{
			f_part = 10 * f_part + (this->get() - '0');
			f_part_length++;
		}
	}
	while (--f_part_length >= 0)
		pow *= 10;
	res = static_cast<float>(d_part);
	if (pow > 1)
	{
		res *= pow;
		res += f_part;
		res /= pow;
	}
	if (debug)
		std::cout << "Number is " << res << std::endl;
	return (res);
}

Fixed			Expr::factor(void)
{
	Fixed		result;

	if (debug)
		std::cout << "Factor: " << this->peek() << std::endl;
	if (this->is_number())
		return (this->number());
	else if (this->peek() == '(')
	{
		this->get();
		result = this->expression();
		this->get();
		return (result);
	}
	else if (this->peek() == '-')
	{
		this->get();
		return (this->factor() * -1);
	}
	return (0);
}

Fixed			Expr::term(void)
{
	Fixed		result;

	if (debug)
		std::cout << "Term: " << this->peek() << std::endl;
	result = this->factor();
	while (this->peek() == '*' || this->peek() == '/')
	{
		if (this->get() == '*')
			result = result * this->factor();
		else
			result = result / this->factor();
	}
	return (result);
}

Fixed			Expr::expression(void)
{
	Fixed		result;

	if (debug)
		std::cout << "Expression: " << this->peek() << std::endl;
	result = this->term();
	while (this->peek() == '+' || this->peek() == '-')
	{
		if (this->get() == '+')
			result = result + this->factor();
		else
			result = result - this->factor();
	}
	return (result);
}

Fixed			Expr::calculate(void)
{
	if (debug)
		std::cout << "Calculate: " << this->getExpr() << std::endl;
	return (this->expression());
}
