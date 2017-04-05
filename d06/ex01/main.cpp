/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 12:39:45 by trecomps          #+#    #+#             */
/*   Updated: 2017/04/05 15:01:54 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include <ctime>

struct Data {

	std::string		s1;
	int				n;
	std::string		s2;

};

void		*serialize(void)
{
	char	*d;
	int		i;

	i = 42;
	d = static_cast<char *>(malloc(sizeof(char) * 16 + sizeof(int)));
	d[20] = '\0';
	std::memcpy(d, "12345678", 8);
	std::memcpy(d + 8, &i, 4);
	std::memcpy(d + 8 + sizeof(int), "abcdefgh", 8);
	return (static_cast<void *>(d));
}

Data		*deserialize(void *src)
{
	Data				*d = new Data;
	char				*buf;
	unsigned char		*raw;

	raw = reinterpret_cast<unsigned char *>(src);
	buf = static_cast<char *>(malloc(9));
	buf[8] = '\0';
	std::memcpy(buf, raw, 8);
	d->s1 = buf;
	std::memcpy(&d->n, raw + 8, 4);
	std::memcpy(buf, raw + 8 + sizeof(int), 8);
	d->s2 = buf;
	free(buf);
	return (d);
}

int			main(void)
{
	Data	*test;

	test = deserialize(serialize());
	std::cout << test->s1 << std::endl;
	std::cout << test->n << std::endl;
	std::cout << test->s2 << std::endl;
}
