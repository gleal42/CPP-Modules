/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 20:25:57 by gleal             #+#    #+#             */
/*   Updated: 2022/04/04 01:47:31 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
# include <iostream>
# include <vector>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int value)
{
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
	std::cout
	<< "accounts:" << getNbAccounts()
	<< ";total:" << getTotalAmount()
	<< ";deposits:" << getNbDeposits()
	<< ";withdrawals:" << getNbWithdrawals()
	<< std::endl;
}

void	Account::makeDeposit( int deposit )
{
	std::cout
	<< "index:" << _accountIndex
	<< ";p_amount:" << checkAmount()
	<< ";deposit:" << deposit;
	_amount += deposit;
	_nbDeposits += 1;
	std::cout
	<< ";amount:" << checkAmount()
	<< ";nb_deposits:"<< _nbDeposits
	<< std::endl;
}

// [19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1

bool	Account::makeWithdrawal( int withdrawal )
{

	return(false);	
}

int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	std::cout
	<< "index:" << _accountIndex
	<< ";amount:" << checkAmount()
	<< ";deposits:" << _nbDeposits
	<< "withdrawals" << _nbWithdrawals 
	<< std::endl;	
}

Account::~Account()
{
	std::cout
	<< "index:" << Account::_accountIndex
	<< ";amount:" << checkAmount()
	<< ";closed"
	<< std::endl;
}