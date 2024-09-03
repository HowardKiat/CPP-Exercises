//test case4: bank account4
#include "BankAccount.hpp"
#include <iostream>
#include <iomanip>

using namespace std;

void testcase4()
{
    BankAccount* account4 = new BankAccount(23, 10099); //dynamic object with parameter
    account4->set_rate(4.5);
    cout << fixed << setprecision(2);
    cout << "Starting balance account 4 = RM " << account4->get_balance() << endl;
    account4->update();
    cout << "Updated balance account 4 = RM " << account4->get_balance() << endl;
    cout << "Interested Rate Per Annual = " << account4->get_rate() << "%" << endl;
    cout << endl;

    delete account4;
    //return 0;
}