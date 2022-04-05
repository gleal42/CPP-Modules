/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 20:25:57 by gleal             #+#    #+#             */
/*   Updated: 2022/04/05 20:29:25 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
# include <iostream>
# include <vector>
# include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int value)
{
	time_t	rawtime;
	struct tm *timeinfo;
	char buffer[80];
	
	std::time(&rawtime);
	timeinfo = std::localtime(&rawtime);
	std::strftime(buffer, 80, "[%Y%m%d_%H%M%S] ", timeinfo);
	std::cout << buffer;
	
	_accountIndex = getNbAccounts();
	_amount = value;
	_nbAccounts++;
	_totalAmount += _amount;	
	std::cout << "index:"
	<< _accountIndex
	<< ";amount:"
	<< checkAmount()
	<< ";created" 
	<< std::endl;
}

int	Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);	
}

int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	time_t	rawtime;
	struct tm *timeinfo;
	char buffer[80];
	
	std::time(&rawtime);
	timeinfo = std::localtime(&rawtime);
	std::strftime(buffer, 80, "[%Y%m%d_%H%M%S] ", timeinfo);
	std::cout << buffer;

	std::cout
	<< "accounts:" << getNbAccounts()
	<< ";total:" << getTotalAmount()
	<< ";deposits:" << getNbDeposits()
	<< ";withdrawals:" << getNbWithdrawals()
	<< std::endl;
}

void	Account::makeDeposit( int deposit )
{
	time_t	rawtime;
	struct tm *timeinfo;
	char buffer[80];
	
	std::time(&rawtime);
	timeinfo = std::localtime(&rawtime);
	std::strftime(buffer, 80, "[%Y%m%d_%H%M%S] ", timeinfo);
	std::cout << buffer;

	std::cout
	<< "index:" << _accountIndex
	<< ";p_amount:" << checkAmount()
	<< ";deposit:" << deposit;
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits += 1;
	_totalNbDeposits += 1;
	std::cout
	<< ";amount:" << checkAmount()
	<< ";nb_deposits:"<< _nbDeposits
	<< std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	time_t	rawtime;
	struct tm *timeinfo;
	char buffer[80];
	
	std::time(&rawtime);
	timeinfo = std::localtime(&rawtime);
	std::strftime(buffer, 80, "[%Y%m%d_%H%M%S] ", timeinfo);
	std::cout << buffer;

	std::cout
	<< "index:" << _accountIndex
	<< ";p_amount:" << checkAmount()
	<< ";withdrawal:";
	if (checkAmount() < withdrawal)
	{
		std::cout << "refused" << std::endl;
		return(false);	
	}
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_nbWithdrawals += 1;
	_totalNbWithdrawals += 1;
	std::cout << withdrawal
	<< ";amount:" << checkAmount()
	<< ";nb_withdrawals:"<< _nbWithdrawals
	<< std::endl;
	return(true);	
}

int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	time_t	rawtime;
	struct tm *timeinfo;
	char buffer[80];
	
	std::time(&rawtime);
	timeinfo = std::localtime(&rawtime);
	std::strftime(buffer, 80, "[%Y%m%d_%H%M%S] ", timeinfo);
	std::cout << buffer;

	std::cout
	<< "index:" << _accountIndex
	<< ";amount:" << checkAmount()
	<< ";deposits:" << _nbDeposits
	<< ";withdrawals:" << _nbWithdrawals 
	<< std::endl;	
}

Account::~Account()
{
	time_t	rawtime;
	struct tm *timeinfo;
	char buffer[80];
	
	std::time(&rawtime);
	timeinfo = std::localtime(&rawtime);
	std::strftime(buffer, 80, "[%Y%m%d_%H%M%S] ", timeinfo);
	std::cout << buffer;
	
	std::cout
	<< "index:" << Account::_accountIndex
	<< ";amount:" << checkAmount()
	<< ";closed"
	<< std::endl;
}
