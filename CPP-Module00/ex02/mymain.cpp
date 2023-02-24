#include <iostream>

#include "Account.hpp"


int main() {

//	Account *test = new Account(7);
	std::cout << "Testing getNBAccounts:    " << Account::getNbAccounts() << "\n";
	std::cout << "Testing getTotalAmount:   " << Account::getTotalAmount() << "\n";
	std::cout << "Testing getNbDeposits:    " << Account::getNbDeposits() << "\n";
	std::cout << "Testing getNbWithdrawals: " << Account::getNbWithdrawals() << "\n";
	return (0);
}
