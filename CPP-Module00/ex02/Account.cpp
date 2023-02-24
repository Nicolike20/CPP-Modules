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
    Account::_displayTimestamp();
    return Account::_totalNbWithdrawals;
}

/*void	displayAccountsInfos( void ) {

}

Account::Account( int initial_deposit ) {
    //?
}

Account::~Account( void ) {
    //?
}

void	makeDeposit( int deposit ) {

}

bool	makeWithdrawal( int withdrawal ){

}

int		checkAmount( void ) const{

}

void	displayStatus( void ) const{

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
    << std::setw(2) << now->tm_sec <<"]";
}
