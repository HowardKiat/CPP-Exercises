#include "CashRegister.hpp"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cashRegister register1;
    register1.printBalance(); 

    cout << fixed << setprecision(2); 
    cout << "Enter customer payment : RM ";

    double payment;
    cin >> payment; 

    register1.acceptAmount(payment); 
    register1.printBalance();

    cout << "Final earning in Cash Register 1 after today: RM " << register1.get_balance() << endl;

    return 0;
}