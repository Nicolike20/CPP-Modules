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

void	displayAccountsInfos( void ) {

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

void	_displayTimestamp( void ) {
    
}