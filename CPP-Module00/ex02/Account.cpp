#include "Account.hpp"

int Account::_nbAccounts;
int Account::_totalAmount;
int Account::_nbDeposits;    //check si esto esta bien;
int Account::_nbWithdrawals; //iniciar a 0 o algo?;

int Account::getNbAccounts(void) {
    return _nbAccounts;
}

int Account::getTotalAmount(void) {
    return _totalAmount;
}

int Account::getNbDeposits(void) {
    return _nbDeposits;
}

int Account::getNbWithdrawals(void) {
    return _nbWithdrawals;
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