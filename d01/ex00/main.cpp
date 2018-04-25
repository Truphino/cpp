/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 12:30:22 by                   #+#    #+#             */
/*   Updated: 2018/04/06 11:58:27 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.class.hpp"
#include <iostream>

void		ponyOnTheStack(void)
{
	Pony	mlp("John", "Smith", 42);

	mlp.jump_it(34);
}

void		ponyOnTheHeap()
{
	Pony	*mlp = new Pony("Marguerite", "White_Black", 3);

	mlp->jump_it(42);
	delete mlp;
}

int			main(void)
{
	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}
