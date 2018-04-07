/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trecomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 10:35:53 by trecomps          #+#    #+#             */
/*   Updated: 2018/04/07 11:30:21 by trecomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.class.hpp"

Logger::Logger(void)
{
	//std::cout << "Default constructor called" << std::endl;
	this->initialize_log_file("log.txt");
	this->initialize_mfs();

	return ;
}

Logger::Logger(std::string const &log_file_name)
{
	this->initialize_log_file(log_file_name);
	this->initialize_mfs();

	return ;
}

Logger::~Logger(void)
{
	//std::cout << "Destructor called" << std::endl;
	this->_log_file.close();

	return ;
}

void			Logger::initialize_mfs(void)
{
	this->_mfs["File"] = &Logger::logToFile;
	this->_mfs["Console"] = &Logger::logToConsole;
}

void			Logger::log(std::string const &dest,
							std::string const &message)
{
	if (this->_mfs.count(dest) > 0)
		(this->*(_mfs[dest]))(message);
}

void			Logger::initialize_log_file(std::string const &fname)
{
	this->_log_file.open(fname, std::fstream::out | std::fstream::app);
}

std::string		Logger::makeLogEntry(std::string const &message) const
{
	std::string	log;
	char		buffer[128];
	time_t		now;

	now = time(0);
	strftime(buffer, 128, "[%d/%m/%Y %H:%M:%S]: ", localtime(&now));
	log.assign(buffer);
	log += message;
	return (log);
}

void		Logger::logToConsole(std::string const &message)
{
	std::cout << this->makeLogEntry(message) << std::endl;
}

void		Logger::logToFile(std::string const &message)
{
	this->_log_file << this->makeLogEntry(message) << std::endl;
}
