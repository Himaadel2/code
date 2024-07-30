#include<iostream>
using namespace std;
class Account
{
public:
// constructor
Account ( int initBalance)
{
if (initBalance >= 0) balance = initBalance;
else
{
balance = 0;
cout << "Initial balance was invalid. Set balance to 0" << endl;
};
}
// Credit adds amount to current balance
void credit ( int amount)
{
balance = balance + amount;
}
// Debit withdraw money from the account
void debit ( int amount)
{
if (amount <= balance) balance = balance - amount;
else
cout << "Debit amount exceeded account balance.";
}
// getBalance
int getBalance()
{
return balance;
}
private:
int balance;
};
int main ()
{
// create two Account objects
Account account1(50);
Account account2(-40);
// display initial balance
cout << "account1 balance is " << account1.getBalance() << endl;
cout << "account2 balance is " << account2.getBalance() << endl << endl;
// credit some funds
cout << "Credit 100 to account1" << endl;
account1.credit(100);
cout << "Now account1 balance is " << account1.getBalance() << endl << endl;
// debit some funds
cout << "Trying to debit 200 from account1" << endl;
account1.debit(200);
cout << "Now account1 balance is " << account1.getBalance() << endl << endl;
cout << "Trying to debit 80 from account1" << endl;
account1.debit(80);
cout << "Now account1 balance is " << account1.getBalance() << endl << endl;
}
