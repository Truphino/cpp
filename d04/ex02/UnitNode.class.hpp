/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UnitNode.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 15:59:37 by trecomps          #+#    #+#             */
/*   Updated: 2017/03/27 16:42:14 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UNITNODE_CLASS_H
# define UNITNODE_CLASS_H

#include <iostream>
#include "ISpaceMarine.class.hpp"

class UnitNode {

public :

	UnitNode(void);
	UnitNode(ISpaceMarine *root);
	~UnitNode(void);
	ISpaceMarine		*getUnit(void) const;
	UnitNode			*getNext(void) const;

	int					addUnit(ISpaceMarine *add);

private :

	UnitNode		*_next;
	ISpaceMarine	*_unit;

};

#endif
