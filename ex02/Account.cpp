/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 15:33:35 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/07 10:57:44 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts(void){return (Account::_nbAccounts);}
int	Account::getTotalAmount(void){return (Account::_totalAmount);}
int	Account::getNbDeposits(void){return (Account::_totalNbDeposits);}
int	Account::getNbWithdrawals(void){return (Account::_totalNbWithdrawals);}
int	Account::checkAmount(void) const {return (this->_amount);}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ';';
	std::cout << "total:" << getTotalAmount() << ';';
	std::cout << "deposits:" << getNbDeposits() << ';';
	std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}

Account::Account(int initial_deposit)
{
	_displayTimestamp();
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_totalAmount += initial_deposit;
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts++;
	std::cout << "index:" << this->_accountIndex << ';';
	std::cout << "amount:" << this->checkAmount() << ';';
	std::cout << "created\n";
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';';
	std::cout << "amount:" << this->checkAmount() << ';';
	std::cout << "closed\n";
}

void	Account::_displayTimestamp( void )
{
	time_t now = std::time(NULL);
	struct tm *splited_time = std::localtime(&now);

	std::cout << '[';
	std::cout << splited_time->tm_year + 1900;
	std::cout << std::setfill('0')
	<< std::setw(2) << splited_time->tm_mon + 1
	<< std::setw(2) << splited_time->tm_mday << '_'
	<< std::setw(2) << splited_time->tm_hour
	<< std::setw(2) << splited_time->tm_min
	<< std::setw(2) << splited_time->tm_sec;
	std::cout << "] ";
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';';
	std::cout << "amount:" << this->checkAmount() << ';';
	std::cout << "deposits:" << this->_nbDeposits << ';';
	std::cout << "withdrawals:" << this->_nbWithdrawals;
	std::cout << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->checkAmount() << ';';
	std::cout << "deposit:" << deposit << ';';
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	this->_amount += deposit;
  Account::_totalAmount += deposit;
	std::cout << "amount:" << this->checkAmount() << ';';
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}


bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';';
	std::cout << "p_amount:" << this->checkAmount() << ';';
	if (this->checkAmount() < withdrawal)
	{
		std::cout << "withdrawal:refused\n";
		return (false);
	}
	else
	{
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals++;
		std::cout << "withdrawal:" << withdrawal << ';';
		std::cout << "amount:" << this->checkAmount() << ';';
		std::cout << "nb_withdrawals:" << this->_nbWithdrawals;
		std::cout << std::endl;
	}
	return (true);
}

