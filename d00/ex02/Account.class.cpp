/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 09:57:17 by                   #+#    #+#             */
/*   Updated: 2017/03/14 11:55:09 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.class.hpp"
#include <iostream>
#include <ctime>

int				Account::_nbAccounts = 0;
int				Account::_totalAmount = 0;
int				Account::_totalNbDeposits = 0;
int				Account::_totalNbWithdrawals = 0;
int				Account::_check_amout_counter = 0;

Account::Account(int initial_deposit)
{
	this->_accountIndex = this->getNbAccounts();
	Account::_nbAccounts += 1;
	this->_amount = initial_deposit;
	Account::_totalAmount += this->_amount;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;
}

Account::~Account(void)
{
	Account::_nbAccounts -= 1;
	Account::_totalAmount -= this->_amount;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
}

void			Account::_displayTimestamp(void)
{
	time_t		t;
	struct tm	*now;

	t = time(0);
	now = localtime(&t);
	std::cout << "[" << (now->tm_year + 1990)
						<< (now->tm_mon + 1)
						<< (now->tm_mday) << "_"
						<< (now->tm_hour)
						<< (now->tm_min)
						<< (now->tm_sec) << "] ";
}

void			Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";";
	std::cout << "total:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawals:" << Account::getNbWithdrawals();
	std::cout << std::endl;
}

void			Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals;
	std::cout << std::endl;
}

void			Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	std::cout << "amount:" << this->_amount << ";";
	this->_nbDeposits += 1;
	Account::_totalNbDeposits += 1;
	std::cout << "nb_deposits:" << this->_nbDeposits;
	std::cout << std::endl;
}

bool			Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "withdrawal:";
	if (withdrawal > this->_amount)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	else
	{
		std::cout << withdrawal << ";";
		this->_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		std::cout << "amount:" << this->_amount << ";";
		this->_nbWithdrawals += 1;
		Account::_totalNbWithdrawals += 1;
		std::cout << "nb_withdrawals:" << this->_nbWithdrawals;
		std::cout << std::endl;
		return (true);
	}
}

int				Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int				Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int				Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int				Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

int				Account::checkAmount(void) const
{
	Account::_check_amout_counter += 1;
	return (this->_amount);
}
