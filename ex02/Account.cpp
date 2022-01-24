/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 18:03:30 by coder             #+#    #+#             */
/*   Updated: 2022/01/24 21:52:34 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Account.hpp"

Account::Account(int initial_deposit)
{
	Account::_nbAccounts += 1;
	this->_accountIndex = 0;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->makeDeposit(initial_deposit);

	Account::_displayTimestamp();
	std::cout << " index:" << Account::getNbAccounts() << ";amount:" << Account::getTotalAmount() << ";created" << std::endl;
}

Account::Account(void)
{
	Account::_nbAccounts += 1;
	this->_accountIndex = 0;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	return;
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << " index:" << Account::getNbAccounts() << ";amount:" << Account::getTotalAmount() << ";closed" << std::endl;
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
	Account::_displayTimestamp();
	std::cout << " accounts:" << Account::getNbAccounts() << ";total:" << Account::getTotalAmount() << ";deposits:" << Account::getNbDeposits() << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	this->_amount += deposit;
	this->_nbDeposits += 1;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits += 1;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (this->_amount <= withdrawal)
	{
		this->_amount -= withdrawal;
		this->_nbWithdrawals += 1;
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals += 1;
		return (true);
	}
	else
	{
		return (false);
	}
}

int	Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	std::cout << "Test" << std::endl;
}

void	Account::_displayTimestamp( void )
{
	char	buffer[128];
	const std::time_t now = std::time(NULL);

    strftime(
        buffer, sizeof(buffer),
        "[%Y%m%d_%H%M%S]",
        std::localtime(&now)
    );
	std::cout << buffer;
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;