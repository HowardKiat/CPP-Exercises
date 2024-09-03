//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//
//class BankAccount
//{
//private:
//    double balance;
//    double interest_rate;
//
//public:
//    BankAccount(); // default constructor
//
//    BankAccount(int dollars, int cents); // parameterized constructor
//
//    void set(int dollars, int cents); // The account balance is set to $dollars.cents;
//
//    void update(); // One year of simple interest is added to account balance
//
//    double get_balance(); // Returns the current balance
//
//    double get_rate(); // Returns the current interest rate
//
//    void set_rate(double rate); // rate is set to interest rate
//
//    ~BankAccount(); // Destructor
//};
//
//BankAccount::BankAccount()
//{
//    balance = 500;
//    interest_rate = 0;
//}
//
//BankAccount::BankAccount(int dollars, int cents)
//{
//    balance = dollars + (0.01 * cents);
//    interest_rate = 0;
//}
//
//void BankAccount::set(int dollars, int cents)
//{
//    balance = dollars + (0.01 * cents);
//}
//
//void BankAccount::update()
//{
//    balance = balance + (balance * (interest_rate / 100));
//}
//
//double BankAccount::get_balance()
//{
//    return balance;
//}
//
//double BankAccount::get_rate()
//{
//    return interest_rate;
//}
//
//void BankAccount::set_rate(double rate)
//{
//    this->interest_rate = rate;
//}
//
//BankAccount::~BankAccount()
//{
//    cout << "Account with balance: " << balance << " is deleted! " << endl;
//}
//
//
//int main()
//{
//    BankAccount account1; //static object with default constructor - put in stack memory
//    account1.set(255, 57);
//    account1.set_rate(3.4);
//    cout << fixed << setprecision(2);
//    cout << "Starting balance account 1 = RM " << account1.get_balance() << endl;
//    account1.update();
//    cout << "Updated balance account 1 = RM " << account1.get_balance() << endl;
//    cout << "Interested Rate Per Annual = " << account1.get_rate() << "%" << endl;
//    cout << endl;
//
//    BankAccount account2; //static object with default constructor - put in stack memory
//    account2.set(345, 55);
//    account2.set_rate(3.2);
//    cout << fixed << setprecision(2);
//    cout << "Starting balance account 2 = RM " << account2.get_balance() << endl;
//    account2.update();
//    cout << "Updated balance account 2 = RM " << account2.get_balance() << endl;
//    cout << "Interested Rate Per Annual = " << account2.get_rate() << "%" << endl;
//    cout << endl;
//
//
//    BankAccount* account3 = new BankAccount; //dynamic object with default constructor
//    account3->set(255, 57);
//    account3->set_rate(3.4);
//    cout << fixed << setprecision(2);
//    cout << "Starting balance account 3 = RM " << account3->get_balance() << endl;
//    account3->update();
//    cout << "Updated balance account 3 = RM " << account3->get_balance() << endl;
//    cout << "Interested Rate Per Annual = " << account3->get_rate() << "%" << endl;
//    cout << endl;
//
//
//    BankAccount* account4 = new BankAccount(23, 10099); //dynamic object with parameter
//    account4->set_rate(4.5);
//    cout << fixed << setprecision(2);
//    cout << "Starting balance account 4 = RM " << account4->get_balance() << endl;
//    account4->update();
//    cout << "Updated balance account 4 = RM " << account4->get_balance() << endl;
//    cout << "Interested Rate Per Annual = " << account4->get_rate() << "%" << endl;
//    cout << endl;
//
//    delete account3;
//    delete account4;
//
//
//}