/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 15:44:52 by trecomps          #+#    #+#             */
/*   Updated: 2017/03/27 16:54:24 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_CLASS_H
# define SQUAD_CLASS_H

#include <iostream>
#include "ISquad.class.hpp"
#include "UnitNode.class.hpp"

class Squad : public ISquad
{

public :

	Squad(void);
	virtual ~Squad(void);

	virtual int				push(ISpaceMarine *push);
	virtual int				getCount(void) const;
	virtual ISpaceMarine	*getUnit(int i) const;

private :

	int			_count;
	UnitNode	*_root;

};

#endif
