/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 13:04:03 by simon             #+#    #+#             */
/*   Updated: 2024/12/16 19:46:30 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>
#include <sstream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

// int	Account::_accountIndex;
// int	Account::_amount;
// int	_nbDeposits;
// int	_nbWithdrawals;

Account::Account()
{
}

void	Account::_displayTimestamp(void)
{
	time_t		now;
	struct tm*	local_time;
	char		buffer[20];

	now = time(NULL);
	local_time = localtime(&now);
	strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", local_time);
	std::cout << buffer;
}

Account::Account(int initial_deposit)
{
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_amount = initial_deposit;
	_totalAmount += _amount;
	_accountIndex = getNbAccounts();
	_nbAccounts++;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
	// _nbAccounts--;
}

int	Account::getNbAccounts(void)
{
	return(_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return(_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);	
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << " accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << \
	";deposit:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

// void	Account::makeDeposit(int deposit)
// {
// 	_nbDeposits += deposit;
// }

// bool	Account::makeWithdrawal(int withdrawal)
// {
	// if (_nbWithdrawals >= withdrawal)
	// 	return (true);
	// return (false);
// }

int		Account::checkAmount( void ) const
{
	return (_amount);
}

//[19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";p_amount:" << checkAmount() << \
	";deposit:" << _nbDeposits << ";amount:" << _amount << ";nb_deposits:" << \
	_nbDeposits << std::endl;
}
