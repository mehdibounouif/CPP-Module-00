/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 09:38:49 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/03 15:46:00 by mbounoui         ###   ########.fr       */
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

int	Account::getNbAccounts( void ){return (Account::_nbAccounts);}
int	Account::getTotalAmount( void ){return (Account::_totalAmount);}
int	Account::getNbDeposits( void ){return (Account::_totalNbDeposits);}
int	Account::getNbWithdrawals( void ){return (Account::_totalNbWithdrawals);}
int	Account::checkAmount( void ) const {return (this->_amount);}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}

Account::Account( int initial_deposit )
{
	Account::_displayTimestamp();
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_amount = initial_deposit;
	this->_accountIndex = Account::_nbAccounts;
	Account::_totalAmount += this->_amount;
	Account::_nbAccounts++;
	std::cout << "index:" << Account::_accountIndex << ";";
	std::cout << "amount:" << Account::checkAmount() << ";";
	std::cout << "created" << std::endl;
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->checkAmount() << ";";
	std::cout << "closed" << std::endl;
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';';
	std::cout << "amount:" << this->_amount << ';';
	std::cout << "deposits:" << this->_nbDeposits << ';';
	std::cout << "withdrawals:" << this->_nbWithdrawals << ';' << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';';
	std::cout << "p_amount:" << this->checkAmount() << ';';
	std::cout << "deposit:" << deposit << ';';

	this->_amount += deposit;
	Account::_totalAmount += deposit;

	this->_nbDeposits++;
	Account::_totalNbDeposits++;

	std::cout << "amount:" << this->checkAmount() << ';';
	std::cout << "nb_deposits:" << this->_nbDeposits << ';' << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';';
	std::cout << "p_amount:" << this->checkAmount() << ';';
	if (withdrawal > this->checkAmount())
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	else
	{
		std::cout << "withdrawal:" << withdrawal << ';';
		this->_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		std::cout << "amount:" << this->checkAmount() << ';';
		this->_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		std::cout << "nb_withdrawls:" << this->_nbWithdrawals;
	}
	std::cout << std::endl;
	return (true);
}

void	Account::_displayTimestamp( void )
{
	// returns the current time in seconds since the epoch (January 1, 1970, 00:00:00 UTC).
	time_t now = std::time(NULL);
	// converts now (seconds since epoch) into local time, filling a tm struct
	// into struct that pointed by timenow
	struct tm *timenow = std::localtime(&now);

	std::cout << "[" << timenow->tm_year + 1900 <<
	std::setfill('0') <<
	std::setw(2) << timenow->tm_mon + 1 <<
	std::setw(2) << timenow->tm_mday << "_" <<
	std::setw(2) << timenow->tm_hour <<
	std::setw(2) << timenow->tm_min <<
	std::setw(2) << timenow->tm_sec << "] ";
}













