#include "CashRegister.hpp"
#include <iostream>
#include <iomanip>

using namespace std;

cashRegister::cashRegister()
{
	cashOnHand = 500.0;
}

cashRegister::cashRegister(double balance)
{
	cashOnHand = balance;
}

double cashRegister::acceptAmount(double amount)
{
	cashOnHand += amount;
	return cashOnHand;
}

double cashRegister::get_balance()
{
	return cashOnHand;
}

void cashRegister::printBalance()
{
	cout << fixed << setprecision(2);
	cout << "Current Balance = RM " << cashOnHand << endl;
}

cashRegister::~cashRegister()
{
	cout << "Account with balance: " << cashOnHand << " is deleted! " << endl;
}

// My Code is so Clean XD Happi!