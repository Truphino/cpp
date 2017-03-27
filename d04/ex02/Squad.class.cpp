/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 15:45:30 by trecomps          #+#    #+#             */
/*   Updated: 2017/03/27 17:00:18 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.class.hpp"

Squad::Squad(void) : _count(0), _root(new UnitNode)
{
	//std::cout << "Default constructor called" << std::endl;

	return ;
}

Squad::~Squad(void)
{
	//std::cout << "Squad Destructor called" << std::endl;
	if (this->_root)
		delete this->_root;

	return ;
}

int			Squad::push(ISpaceMarine *push)
{
	int		i;
	i = this->_root->addUnit(push);
	this->_count += i;
	return (i);
}

int			Squad::getCount(void) const
{
	return (this->_count);
}

ISpaceMarine	*Squad::getUnit(int i) const
{
	UnitNode	*tmp;

	tmp = this->_root;
	if (i < 0 || i > this->_count - 1)
		return (NULL);
	while (i > 0)
	{
		tmp = tmp->getNext();
		i--;
	}
	return (tmp->getUnit());
}
