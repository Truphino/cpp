/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.class.hpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 13:08:59 by trecomps          #+#    #+#             */
/*   Updated: 2017/03/29 13:25:16 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_CLASS_H
# define SHRUBBERYCREATIONFORM_CLASS_H

#include <iostream>
#include "Form.class.hpp"

class ShrubberyCreationForm : public Form
{

public :

	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const &rhs);
	virtual ~ShrubberyCreationForm(void);

	virtual void	execute(Bureaucrat const &executor) const;

private :
	ShrubberyCreationForm(void);

};

#endif
