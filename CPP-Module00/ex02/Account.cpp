#include <ctime>
#include <iostream>
#include <iomanip>

#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void) {
    return Account::_nbAccounts;
}

int Account::getTotalAmount(void) {
    return Account::_totalAmount;
}

int Account::getNbDeposits(void) {
    return Account::_totalNbDeposits;
}

int Account::getNbWithdrawals(void) {
    return Account::_totalNbWithdrawals;
}

Account::Account() {
    _accountIndex = _nbAccounts++;
    _amount = 0;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created\n";
}

Account::Account( int initial_deposit ) {
    _accountIndex = _nbAccounts++;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _totalAmount += initial_deposit;
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created\n";
}

Account::~Account( void ) {
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed\n";
}

void Account::displayAccountsInfos( void ) {
    
    Account::_displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits <<  ";withdrawals:" << _totalNbWithdrawals << "\n";
}

void Account::displayStatus( void ) const {
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" <<  _amount << ";deposits:" << _nbDeposits  << ";withdrawals:" <<  _nbWithdrawals << "\n";
}

void	Account::makeDeposit( int deposit ) {
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit;
    _amount += deposit;
    _totalAmount += deposit;
    _nbDeposits++;
    _totalNbDeposits++;
    std::cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << "\n";
}

bool	Account::makeWithdrawal( int withdrawal ){
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:";
    if (withdrawal > _amount) {
        std::cout << "refused\n";
        return  (false);
    } else {
        std::cout << withdrawal;
        _amount -= withdrawal;
        _totalAmount -= withdrawal;
        _nbWithdrawals++;
        _totalNbWithdrawals++;
        std::cout << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << "\n";
        return (true);
    }
}

int		Account::checkAmount( void ) const{
    return _amount;
}

void Account::_displayTimestamp( void ) {
    std::time_t time = std::time(NULL);
    std::tm *now = localtime(&time);

    std::cout << "["  << std::setfill('0')
    << now->tm_year + 1900
    << std::setw(2) << now->tm_mon + 1
    << std::setw(2) << now->tm_mday << "_"
    << std::setw(2) << now->tm_hour
    << std::setw(2) << now->tm_min
    << std::setw(2) << now->tm_sec <<"] ";
}
