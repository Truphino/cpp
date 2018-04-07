/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 09:34:04 by trecomps          #+#    #+#             */
/*   Updated: 2018/04/07 10:27:56 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_CLASS_H
# define HUMAN_CLASS_H

#include <iostream>
#include <map>

class Human {

public :
	typedef					void (Human::*funct_ptr)(std::string const &targ);

	Human(void);
	~Human(void);

	void			action(std::string const &action_name,
							std::string const &target);

private :
	void					meleeAttack(std::string const &target);
	void					rangedAttack(std::string const &target);
	void					intimidatingShout(std::string const &target);
	std::map<std::string, funct_ptr>	_mfs;
};

#endif
