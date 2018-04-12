/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 10:58:43 by trecomps          #+#    #+#             */
/*   Updated: 2018/04/12 11:58:28 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Expr.class.hpp"

Fixed	eval_expr(std::string expr)
{
	Expr		expression(expr);

	return (expression.calculate());
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		std::cout << eval_expr(static_cast<std::string>(argv[1])) << std::endl;
	else
		std::cout << "Usage: ./eval_expr \"[expr]\"" << std::endl;

	return (0);
}
