#include <iostream>
using namespace std;
class BankAccount
{
private:
    double balance;

public:
    double deposit(double amount)
    {
        balance += amount;
    }
    double withdraw(double amount)
    {
        if (balance - amount >= 0)
        {
            balance -= amount;
        }
        else
        {
            cout << "Insufficient Balance!" << endl;
        }
    }
    double get_balance()
    {
        cout << "Balance is : " << balance << endl;
    }
};
int main()
{
    BankAccount ac;
    int choice;
    int option;
    double amount;
    cout << "1. Banking\t2. Quit." << endl;
    cout << "Enter Option Number : ";
    cin >> option;
    if (option == 1)
    {
        while (true)
        {
            cout << "1. Deposit\t2. Withdrawl\n3. Balance\t4.Quit." << endl
                 << endl;
            cout << "Enter Option Number : ";
            cin >> choice;
            switch (choice)
            {
            case 1:
                cout << "Enter Amount : ";
                cin >> amount;
                ac.deposit(amount);
                break;
            case 2:
                cout << "Enter Amount : ";
                cin >> amount;
                ac.withdraw(amount);
            case 3:
                ac.get_balance();
                break;
            case 4:
                return 0;
                break;
            default:
                cout << "Invalid Choice!" << endl;
                break;
            }
        }
    }
    else
    {
        return 0;
    }
    return 0;
}