/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 10:36:08 by trecomps          #+#    #+#             */
/*   Updated: 2018/04/07 11:27:01 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_CLASS_H
# define LOGGER_CLASS_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <ctime>
#include <map>

class Logger {

public :
	Logger(void);
	Logger(std::string const &log_file_name);
	~Logger(void);

	typedef				void (Logger::*func_ptr)(std::string const &message);

	void				log(std::string const &dest,
							std::string const &message);

private :
	void				initialize_mfs(void);
	void				initialize_log_file(std::string const &fname);
	std::string			makeLogEntry(std::string const &message) const;
	void				logToConsole(std::string const &message);
	void				logToFile(std::string const &message);

	std::ofstream						_log_file;
	std::map<std::string, func_ptr>		_mfs;
};

#endif
