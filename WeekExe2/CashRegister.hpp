#pragma once

#ifndef CASHREGISTER_HPP
#define CASHREGISTER_HPP

class cashRegister
{
private:
	double cashOnHand;

public:
	cashRegister(); 

	cashRegister(double balance);

	double acceptAmount(double amount);

	double get_balance();

	void printBalance();

	~cashRegister();
};

#endif