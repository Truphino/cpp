/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 15:08:07 by trecomps          #+#    #+#             */
/*   Updated: 2017/04/05 16:44:52 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_CLASS_H
# define BASE_CLASS_H

#include <iostream>

class Base {
	public :
		virtual ~Base(void);
		Base();
};

class A : public Base
{
	public :
	~A(void);
	A(void);
};

class B : public Base
{
	public :
	~B(void);
	B(void);
};

class C : public Base
{
	public :
	~C(void);
	C(void);
};

#endif
