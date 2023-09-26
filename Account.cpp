#include <iostream>
using namespace std;
class BankAccount
{
private:
    double balance;

public:
    BankAccount(double current_balance)
    {
        balance = current_balance;
    }
    void diposit(double amount)
    {
        balance += amount;
    }
    void withdraw(double amount)
    {
        if (balance < amount)
        {
            cout << "Insufficient Funds!"<<endl;
        }
        else
        {
            balance -= amount;
        }
    }
    double getbalance()
    {
        cout << "Current Balance : " << balance;
        return balance;
    }
};

int main()
{
    BankAccount Account(100);
    Account.diposit(500);
    Account.withdraw(3590);
    Account.getbalance();
}
