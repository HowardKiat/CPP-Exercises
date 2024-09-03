//test case3: bank account3
#include "BankAccount.hpp"
#include <iostream>
#include <iomanip>

using namespace std;

void testcase3()
{
    BankAccount* account3 = new BankAccount; //dynamic object with default constructor
    account3->set(255, 57);
    account3->set_rate(3.4);
    cout << fixed << setprecision(2);
    cout << "Starting balance account 3 = RM " << account3->get_balance() << endl;
    account3->update();
    cout << "Updated balance account 3 = RM " << account3->get_balance() << endl;
    cout << "Interested Rate Per Annual = " << account3->get_rate() << "%" << endl;
    cout << endl;

    delete account3;
    /*return 0;*/
}