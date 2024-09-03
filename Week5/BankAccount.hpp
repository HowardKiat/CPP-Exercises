#pragma once

// USE FOR ONLY 1 TIME INCLUDE IN PROGRAM
#ifndef BANKACCOUNT_HPP
#define BANKACCOUNT_HPP

class BankAccount //CLASS DEFINITION
{
private:
    double balance;
    double interest_rate;

public:
    BankAccount(); // default constructor

    BankAccount(int dollars, int cents); // parameterized constructor

    void set(int dollars, int cents); // The account balance is set to $dollars.cents;

    void update(); // One year of simple interest is added to account balance

    double get_balance(); // Returns the current balance

    double get_rate(); // Returns the current interest rate

    void set_rate(double rate); // rate is set to interest rate

    ~BankAccount(); // Destructor

};

#endif // !BANKACCOUNT_HPP
