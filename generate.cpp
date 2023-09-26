#include <iostream>
#include <string>

using namespace std;

class BankAccount
{
private:
    string account_holder;
    int account_number;
    double balance;

public:
    BankAccount(string name, int number, double bal)
    {
        account_holder = name;
        account_number = number;
        balance = bal;
    }
    void deposit(double amount)
    {
        balance += amount;
    }
    void withdraw(double amount)
    {
        if (balance - amount >= 0)
        {
            balance -= amount;
            cout << "Withdrawal successful." << endl;
        }
        else
        {
            cout << "Insufficient balance." << endl;
        }
    }
    void display_info()
    {
        cout << "Account holder: " << account_holder << endl;
        cout << "Account number: " << account_number << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main()
{
    BankAccount account("John Doe", 123456, 1000);
    int choice;
    double amount;

    while (true)
    {
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Display account information" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter amount to deposit: $";
            cin >> amount;
            account.deposit(amount);
            break;
        case 2:
            cout << "Enter amount to withdraw: $";
            cin >> amount;
            account.withdraw(amount);
            break;
        case 3:
            account.display_info();
            break;
        case 4:
            return 0;
        default:
            cout << "Invalid choice." << endl;
        }
    }

    return 0;
}
