/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 10:56:10 by trecomps          #+#    #+#             */
/*   Updated: 2017/04/05 12:20:57 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <cfloat>
#include <climits>
#include <cmath>

int			is_special_val(double db)
{
	if (db != db || db > DBL_MAX || db < -DBL_MAX)
		return (1);
	else
		return (0);
}

int			is_decimal(double db)
{
	if (db - static_cast<long>(db) == 0)
		return (0);
	else
		return (1);
}

void		print_char(double db)
{
	char	c;

	std::cout << "char: ";
	if (is_special_val(db))
		std::cout << "impossible" << std::endl;
	else if (db > CHAR_MAX || db < CHAR_MIN)
		std::cout << "overflow" << std::endl;
	else if (db <= 32 || db == 127)
		std::cout << "Non displayable" << std::endl;
	else
	{
		c = static_cast<char>(db);
		std::cout << c << std::endl;
	}
}

void		print_int(double db)
{
	int		i;

	std::cout << "int: ";
	if (is_special_val(db))
		std::cout << "impossible" << std::endl;
	else if (db > INT_MAX || db < INT_MIN)
		std::cout << "overflow" << std::endl;
	else
	{
		i = static_cast<int>(db);
		std::cout << i << std::endl;
	}
}

void		print_float(double db)
{
	float	f;

	std::cout << "float: ";
	if (db > -DBL_MAX && db < DBL_MAX && (db > FLT_MAX || db < -FLT_MAX))
		std::cout << "overflow" << std::endl;
	else
	{
		f = static_cast<float>(db);
		std::cout << f;
		if (!is_decimal(db))
			std::cout << ".0";
		std::cout << "f" << std::endl;
	}
}

int			main(int argc, char **argv)
{
	double			db;

	if (argc != 2)
		return (0);
	else
	{
		db = strtod(argv[1], NULL);
		print_char(db);
		print_int(db);
		print_float(db);
		std::cout << "double: " << db;
		if (!is_decimal(db))
			std::cout << ".0";
		std::cout << std::endl;
	}
}
