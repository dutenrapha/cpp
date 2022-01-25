/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 18:03:30 by coder             #+#    #+#             */
/*   Updated: 2022/01/25 20:27:55 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Account.hpp"

Account::Account(int initial_deposit)
{
	this->_accountIndex = Account::_nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_nbAccounts += 1;
	Account::_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << " index:" << Account::_accountIndex 
			  << ";amount:" << Account::checkAmount() 
			  << ";created" << std::endl;
}

Account::Account(void)
{
	this->_accountIndex = Account::_nbAccounts;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_nbAccounts += 1;
	Account::_displayTimestamp();
	std::cout << " index:" << Account::_accountIndex 
			  << ";amount:" << Account::checkAmount() 
			  << ";created" << std::endl;
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << " index:" << Account::_accountIndex 
			  << ";amount:" << Account::checkAmount() 
			  << ";closed" << std::endl;
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
	std::cout << " accounts:" << Account::getNbAccounts() 
			  << ";total:" << Account::getTotalAmount() 
			  << ";deposits:" << Account::getNbDeposits() 
			  << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	Account::_displayTimestamp();
	std::cout << " index:" << Account::_accountIndex 
			  << ";p_amount:" << Account::checkAmount() 
			  << ";deposit:" << deposit
			  << ";amount:" << Account::checkAmount() + deposit				  
			  << ";nb_deposits:" << this->_nbWithdrawals + 1<< std::endl;
	this->_amount += deposit;
	this->_nbDeposits += 1;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits += 1;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (this->_amount >= withdrawal)
	{
		Account::_displayTimestamp();
		std::cout << " index:" << Account::_accountIndex 
				  << ";p_amount:" << Account::checkAmount() 
				  << ";withdrawal:" << withdrawal
				  << ";amount:" << Account::checkAmount() - withdrawal				  
				  << ";nb_withdrawals:" << this->_nbWithdrawals + 1<< std::endl;
		this->_amount -= withdrawal;
		this->_nbWithdrawals += 1;
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals += 1;		
		return (true);
	}
	else
	{
		Account::_displayTimestamp();
		std::cout << " index:" << Account::_accountIndex 
						<< ";p_amount:" << Account::checkAmount() 
						<< ";withdrawal:refused" << std::endl;
		return (false);
	}
}

int	Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << " index:" << Account::_accountIndex 
			  << ";amount:" << Account::checkAmount() 
			  << ";deposits:" << this->_nbDeposits 
			  << ";withdrawals:" << this->_nbWithdrawals << std::endl;
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