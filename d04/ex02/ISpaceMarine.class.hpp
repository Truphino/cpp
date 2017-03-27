/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.class.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 15:41:20 by trecomps          #+#    #+#             */
/*   Updated: 2017/03/27 15:42:37 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARIEN_CLASS_H
# define ISPACEMARIEN_CLASS_H

class ISpaceMarine
{
	public:
			virtual ~ISpaceMarine() {}
			virtual ISpaceMarine* clone() const = 0;
			virtual void battleCry() const = 0;
			virtual void rangedAttack() const = 0;
			virtual void meleeAttack() const = 0;
};

#endif
