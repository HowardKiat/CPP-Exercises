//test case1: bank account1
#include "BankAccount.hpp"
#include <iostream>
#include <iomanip>

using namespace std;

void testcase1()
//int main()
{
    BankAccount account1; //static object with default constructor - put in stack memory
    account1.set(255, 57);
    account1.set_rate(3.4);
    cout << fixed << setprecision(2);
    cout << "Starting balance account 1 = RM " << account1.get_balance() << endl;
    account1.update();
    cout << "Updated balance account 1 = RM " << account1.get_balance() << endl;
    cout << "Interested Rate Per Annual = " << account1.get_rate() << "%" << endl;
    cout << endl;

   // return 0;
}