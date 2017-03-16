/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 14:57:05 by                   #+#    #+#             */
/*   Updated: 2017/03/13 18:09:17 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

class Contact{

public :

	Contact(void);
	~Contact(void);
	void	to_empty(void);
	bool	is_empty(void) const;
	void	add(void);
	void	print_contact(void) const;

	static int		get_num_contact(void);
	std::string		first_name;
	std::string		last_name;
	std::string		nickname;
	std::string		login;
	std::string		postal_adress;
	std::string		email_adress;
	std::string		phone_number;
	std::string		birthday_date;
	std::string		favorite_meal;
	std::string		underwear_color;
	std::string		darkest_secret;

private :
	static int		_num_contact;

	bool			_empty;

};

#endif
