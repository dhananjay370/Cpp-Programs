#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

class BankAccount
{
private:
    string name;
    float balance;
    string pin;
    int account_number;

public:
    BankAccount(string name, float balance, string pin)
    {
        this->name = name;
        this->balance = balance;
        this->pin = pin;
        this->account_number = rand() % 900000 + 100000;
    }

    void deposit(float amount)
    {
        balance += amount;
        cout << "Deposit successful. New balance is " << balance << "." << endl;
    }

    void change_pin(string current_pin, string new_pin)
    {
        if (current_pin == pin)
        {
            pin = new_pin;
            cout << "PIN changed successfully." << endl;
        }
        else
        {
            cout << "Incorrect PIN. PIN change unsuccessful." << endl;
        }
    }

    int get_account_number()
    {
        return account_number;
    }

    float get_balance()
    {
        return balance;
    }
};

BankAccount create_account()
{
    string name;
    float balance;
    string pin;

    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter starting balance: ";
    cin >> balance;
    cout << "Enter PIN: ";
    cin >> pin;

    BankAccount account(name, balance, pin);
    cout << "Account created. Your account number is " << account.get_account_number() << "." << endl;

    return account;
}

int main()
{
    srand(time(NULL));
    cout << "Welcome to the ATM!" << endl;
    BankAccount account = create_account();

    while (true)
    {
        cout << "1. Check balance\n2. Deposit\n3. Change PIN\n4. Quit" << endl;
        int choice;
        cin >> choice;

        if (choice == 1)
        {
            cout << "Your balance is " << account.get_balance() << "." << endl;
        }
        else if (choice == 2)
        {
            float amount;
            cout << "Enter amount to deposit: ";
            cin >> amount;
            account.deposit(amount);
        }
        else if (choice == 3)
        {
            string current_pin, new_pin;
            cout << "Enter current PIN: ";
            cin >> current_pin;
            cout << "Enter new PIN: ";
            cin >> new_pin;
            account.change_pin(current_pin, new_pin);
        }
        else if (choice == 4)
        {
            cout << "Thank you for using the ATM. Goodbye!" << endl;
            break;
        }
        else
        {
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
