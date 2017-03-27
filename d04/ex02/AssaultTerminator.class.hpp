/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.class.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 15:55:58 by trecomps          #+#    #+#             */
/*   Updated: 2017/03/27 16:24:29 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_CLASS_H
# define ASSAULTTERMINATOR_CLASS_H

#include <iostream>
#include "ISpaceMarine.class.hpp"

class AssaultTerminator : public ISpaceMarine
{

public :

	AssaultTerminator(void);
	virtual ~AssaultTerminator(void);

	virtual ISpaceMarine	*clone(void) const;
	virtual void			battleCry() const;
	virtual void			rangedAttack() const;
	virtual void			meleeAttack() const;

private :

};

#endif
