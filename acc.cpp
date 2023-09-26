#include <iostream>
using namespace std;
class BankAccount
{
private:
    double balance;

public:
    double ac(double initbalance)
    {
        initbalance = balance;
    }
    double deposit(double amount)
    {
        balance += amount;
        cout << amount << " RS. Deposited Successfully." << endl;
    }
    double withdraw(double amount)
    {
        if (balance - amount >= 0)
        {
            balance -= amount;
            cout << amount << " RS. Withdrawl Successfully." << endl;
        }
        else
        {
            cout << "Insufficient balance." << endl;
        }
    }
    double get_balance()
    {
        cout << "Current Balance is : " << balance << endl;
    }
};
int main()
{
    BankAccount ac;
    int choice;
    double amount;
    int banking;
    cout << "1. Banking\t2. Quit." << endl;
    cout << "Enter Option Number : ";
    cin >> banking;
    if (banking == 1)
    {
        while (true)
        {
            cout << "1. Deposit\t2. Withdrawl\n3. Balance\t4. Quit." << endl;
            cout << "Enter Option Number : ";
            cin >> choice;

            switch (choice)
            {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                ac.deposit(amount);
                break;
            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                ac.withdraw(amount);
                break;
            case 3:
                ac.get_balance();
                break;
            case 4:
                return 0;
            default:
                cout << "Invalid Choice!" << endl;
                break;
            }
        }
    }
    else if(banking==2){
        cout<<"Quitting.."<<endl;
        return 0;
    }
    return 0;
}