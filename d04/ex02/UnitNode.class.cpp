/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UnitNode.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 16:00:17 by trecomps          #+#    #+#             */
/*   Updated: 2017/03/29 11:13:48 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "UnitNode.class.hpp"

UnitNode::UnitNode(void) : _next(NULL), _unit(NULL)
{
	return ;
}

UnitNode::UnitNode(ISpaceMarine *root) : _next(NULL), _unit(root)
{
	return ;
}

UnitNode::~UnitNode(void)
{
	//std::cout << "Unit destructor called" << std::endl;
	if (this->_unit)
		delete this->_unit;
	if (this->_next)
		delete this->_next;
	return ;
}

ISpaceMarine		*UnitNode::getUnit(void) const
{
	return (this->_unit);
}

UnitNode		*UnitNode::getNext(void) const
{
	return (this->_next);
}

int			UnitNode::addUnit(ISpaceMarine *add)
{
	UnitNode	*tmp;

	if (add == NULL)
		return (0);
	tmp = this;
	if (tmp->_unit == NULL)
		tmp->_unit = add;
	else
	{
		while (tmp->getNext() != NULL)
		{
			if (tmp->getUnit() == add)
			{
				std::cout << "I'm already in this squad !!"
					<< std::endl;
				return (0);
			}
			tmp = tmp->getNext();
		}
		if (add == tmp->getUnit())
		{
			std::cout << "I'm already in this squad !!"
				<< std::endl;
			return (0);
		}
		tmp->_next = new UnitNode(add);
	}
	return (1);
}
