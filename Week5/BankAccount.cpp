//include all the external method body
#include "BankAccount.hpp"
#include <iostream>

using namespace std;


BankAccount::BankAccount()
{
    balance = 500;
    interest_rate = 0;
}

BankAccount::BankAccount(int dollars, int cents)
{
    balance = dollars + (0.01 * cents);
    interest_rate = 0;
}

void BankAccount::set(int dollars, int cents)
{
    balance = dollars + (0.01 * cents);
}

void BankAccount::update()
{
    balance = balance + (balance * (interest_rate / 100));
}

double BankAccount::get_balance()
{
    return balance;
}

double BankAccount::get_rate()
{
    return interest_rate;
}

void BankAccount::set_rate(double rate)
{
    this->interest_rate = rate;
}

BankAccount::~BankAccount()
{
    cout << "Account with balance: " << balance << " is deleted! " << endl;
}