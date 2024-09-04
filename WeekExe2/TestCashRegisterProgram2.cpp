#include "CashRegister.hpp"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cashRegister* register2 = new cashRegister;
    register2->printBalance();

    cout << fixed << setprecision(2);
    cout << "Enter customer payment : RM ";

    double payment;
    cin >> payment;

    register2->acceptAmount(payment);
    register2->printBalance();

    cout << "Final earning in Cash Register 2 after today: RM " << register2->get_balance() << endl;

    delete register2;
    return 0;
}
