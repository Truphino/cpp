/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 10:20:08 by trecomps          #+#    #+#             */
/*   Updated: 2018/04/07 10:28:35 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.class.hpp"
#include <iostream>

int		main(void)
{
	Human		paul;

	paul.action("Melee","YOU");
	paul.action("Ranged","YOU");
	paul.action("Shout","YOU");
}
