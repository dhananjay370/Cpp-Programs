#include <iostream>
using namespace std;

class BankAccount
{
public:
    double balance;
    BankAccount(double initial_balance)
    {
        balance = initial_balance;
    }
    void deposit(double amount)
    {
        balance += amount;
    }
    void withdraw(double amount)
    {
        balance -= amount;
    }
    double get_balance()
    {
        return balance;
    }
};

int main()
{
    BankAccount account(100);
    account.deposit(50);
    account.withdraw(25);
    account.deposit(900);
    double current_balance = account.get_balance();
    account.deposit(500);
    account.deposit(55500.590);
    current_balance = account.get_balance();
    cout << "Total Balance : " << current_balance;
}