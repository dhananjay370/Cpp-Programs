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
    double withdraw()
    {
        double amount;
        cout << "Enter Amount : ";
        cin >> amount;
        if (amount > balance)
        {
            cout << "Insufficient Balance!" << endl;
        }
        else
        {
            cout << amount << " RS. Collect Your Cash." << endl;
        }
    }
    double deposit()
    {
        double amount;
        cout << "Enter Amount : ";
        cin >> amount;
        cout << amount << " RS. Deposited Successfully." << endl;
    }
    double display()
    {
        cout << "Current Balance is : " << balance << endl;
    }
};
double banking()
{    
    while (true){
        int choice;
        cout << "1. Withdraw\t2. deposit\n3. Balance\t4. Quit." << endl;
        cout << "Enter Option Number : ";
        cin>>choice;

        switch (choice)
        {
        case 1:
            /* code */
            break;
        
        default:
            break;
        }
    }
}
int main()
{
    BankAccount ac;
    int banking, option;
    cout << "1. Banking\t2.Quit" << endl;
    cout << "Enter Option Number : ";
    cin >> banking;
    if (banking == 2)
    {
        exit(0);
    }
    else
    {
        cout << "1. Withdraw\t2. deposit\n3. Balance\t4. Quit." << endl;
        cout << "Enter Option Number : ";
        cin >> option;
        switch (option)
        {
        case 1:
            ac.withdraw();
            break;

        case 2:
            ac.deposit();
            break;

        case 3:
            ac.display();
            break;

        case 4:
            exit(0);
            break;

        default:
            break;
        }
    }
}