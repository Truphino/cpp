/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.class.hpp                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 13:52:37 by trecomps          #+#    #+#             */
/*   Updated: 2017/03/29 13:53:03 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_CLASS_H
# define PRESIDENTIALPARDONFORM_CLASS_H

#include <iostream>
#include "Form.class.hpp"

class PresidentialPardonForm : public Form
{

public :

	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const &rhs);
	virtual ~PresidentialPardonForm(void);

	virtual void	execute(Bureaucrat const &executor) const;

private :
	PresidentialPardonForm(void);

};

#endif
