//test case2: bank account2
#include "BankAccount.hpp"
#include <iostream>
#include <iomanip>

using namespace std;

void testcase2()
{
    BankAccount account2; //static object with default constructor - put in stack memory
    account2.set(345, 55);
    account2.set_rate(3.2);
    cout << fixed << setprecision(2);
    cout << "Starting balance account 2 = RM " << account2.get_balance() << endl;
    account2.update();
    cout << "Updated balance account 2 = RM " << account2.get_balance() << endl;
    cout << "Interested Rate Per Annual = " << account2.get_rate() << "%" << endl;
    cout << endl;

    //return 0;
}