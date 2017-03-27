/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.class.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 15:55:58 by trecomps          #+#    #+#             */
/*   Updated: 2017/03/27 16:23:06 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_CLASS_H
# define TACTICALMARINE_CLASS_H

#include <iostream>
#include "ISpaceMarine.class.hpp"

class TacticalMarine : public ISpaceMarine
{

public :

	TacticalMarine(void);
	virtual ~TacticalMarine(void);

	virtual ISpaceMarine	*clone(void) const;
	virtual void			battleCry() const;
	virtual void			rangedAttack() const;
	virtual void			meleeAttack() const;

private :

};

#endif
