/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 10:47:30 by trecomps          #+#    #+#             */
/*   Updated: 2018/04/07 11:30:51 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.class.hpp"

int		main(void)
{
	Logger		logger("second_log.txt");

	logger.log("Console", "First Log");
	logger.log("File", "Start log");
	logger.log("Crash", "Don't crash pls");
}
