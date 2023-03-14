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
    std::cout << "test\n"; //esto es necesario?
}

Account::Account( int initial_deposit ) {
    _accountIndex = _nbAccounts++;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _totalAmount += initial_deposit;
 //   _nbAccounts++;
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created\n";
}

Account::~Account( void ) {
}

void Account::displayAccountsInfos( void ) {
    
    Account::_displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits <<  ";withdrawals:" << _totalNbWithdrawals << "\n";
}

void Account::displayStatus( void ) const {
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" <<  _amount << ";deposits:" << _nbDeposits  << ";withdrawals:" <<  _nbWithdrawals << "\n";
}

/*void	makeDeposit( int deposit ) {

}

bool	makeWithdrawal( int withdrawal ){

}

int		checkAmount( void ) const{

}
*/

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
