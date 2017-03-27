/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 14:00:58 by trecomps          #+#    #+#             */
/*   Updated: 2017/03/27 14:56:56 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_CLASS_H
# define ENEMY_CLASS_H

#include <iostream>

class Enemy {

public :

	Enemy(int hp, std::string const &type);
	Enemy(Enemy const &rhs);
	virtual ~Enemy(void);

	Enemy	&operator=(Enemy const &rhs);

	int				getHp(void) const;
	std::string		getType(void) const;

	virtual void	takeDamage(int);

protected :

	Enemy(void);
	int				_hp;
	std::string		_type;

};

#endif
