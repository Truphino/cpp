/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Test.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 10:53:53 by trecomps          #+#    #+#             */
/*   Updated: 2017/04/06 11:10:25 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_CLASS_H
# define TEST_CLASS_H

#include <iostream>

class Test {

public :

	Test(void);
	Test(int const foo, int const bar);
	Test(Test const &rhs);
	~Test(void);

	Test	&operator=(Test const &rhs);

	void	setParam(const int foo, const int bar);

	int		getFoo(void) const;
	int		getBar(void) const;

private :

	int		_foo;
	int		_bar;

};

std::ostream		&operator<<(std::ostream &o, Test const &i);

#endif
