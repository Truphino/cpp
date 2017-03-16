/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 12:30:16 by                   #+#    #+#             */
/*   Updated: 2017/03/14 12:48:21 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Pony {

public :

	const std::string		name;
	const std::string		color;
	int						height;

	Pony(std::string pname, std::string pcolor, int pheight);
	~Pony(void);
	void					jump_it(int jump_height);

private :

};
