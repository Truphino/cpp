/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 09:34:06 by trecomps          #+#    #+#             */
/*   Updated: 2018/04/07 10:31:47 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.class.hpp"

Human::Human(void)
{
	//std::cout << "Default constructor called" << std::endl;
	_mfs["Melee"] = &Human::meleeAttack;
	_mfs["Ranged"] = &Human::rangedAttack;
	_mfs["Shout"] = &Human::intimidatingShout;

	return ;
}

Human::~Human(void)
{
	//std::cout << "Destructor called" << std::endl;
	
	return ;
}

void		Human::meleeAttack(std::string const &target)
{
	std::cout << "Human use melee attack on " << target << std::endl;
}

void		Human::rangedAttack(std::string const &target)
{
	std::cout << "Human use ranged attack on " << target << std::endl;
}

void		Human::intimidatingShout(std::string const &target)
{
	std::cout << "Human use intimidating shout on " << target << std::endl;
}

void		Human::action(std::string const &action_name,
							std::string const &target)
{
	if (this->_mfs.count(action_name) > 0)
		(this->*(_mfs[action_name]))(target);
	else
		std::cout << "Unknow action name" << std::endl;
}
