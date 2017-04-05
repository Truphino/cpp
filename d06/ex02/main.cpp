/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 15:07:50 by trecomps          #+#    #+#             */
/*   Updated: 2017/04/05 16:42:14 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.class.hpp"

Base	*generate(void)
{
	int	i;

	srand(time(NULL));
	i = rand() % 3;
	if (i == 0)
		return (new A);
	else if (i == 1)
		return (new B);
	else
		return (new C);
}

void	identify_from_pointer(Base *p)
{
	Base		*test;

	if ((test = dynamic_cast<A*>(p)) != NULL)
		std::cout << "A" << std::endl;
	else if ((test = dynamic_cast<B*>(p)) != NULL)
		std::cout << "B" << std::endl;
	else if ((test = dynamic_cast<C*>(p)) != NULL)
		std::cout << "C" << std::endl;
}

void	identify_from_reference(Base &p)
{
	try {
		p = dynamic_cast<A&>(p);
		std::cout << 'A' << std::endl;
		return ;
	}
	catch (std::exception e){}
	try{
		p = dynamic_cast<B&>(p);
		std::cout << 'B' << std::endl;
		return ;
	}
	catch (std::exception f){}
	try {
		p = dynamic_cast<C&>(p);
		std::cout << 'C' << std::endl;
		return ;
	}
	catch (std::exception g){}
}

int		main(void)
{
	Base	*wich;

	wich = generate();
	identify_from_pointer(wich);
	identify_from_reference(*wich);
}
