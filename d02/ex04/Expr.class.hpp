/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Expr.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 11:07:21 by trecomps          #+#    #+#             */
/*   Updated: 2018/04/12 12:16:52 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXPR_CLASS_H
# define EXPR_CLASS_H

#include <iostream>
#include <string>
#include "Fixed.class.hpp"

class Expr {

public :

	Expr(void);
	Expr(std::string const n);
	Expr(Expr const &rhs);
	~Expr(void);

	Expr					&operator=(Expr const &rhs);
	std::string				getExpr(void) const;
	void					setExpr(std::string str);

	int						is_digit(void) const;
	int						is_number(void) const;
	char					get(void);
	char					peek(void) const;
	Fixed					number(void);
	Fixed					factor(void);
	Fixed					term(void);
	Fixed					expression(void);
	Fixed					calculate(void);

	static int const		debug;

private :
	std::string				_expr;
	std::string::iterator	_pos;

	std::string				delete_whitespace(const std::string &str) const;
};

std::ostream		&operator<<(std::ostream &o, Expr const &i);

#endif
