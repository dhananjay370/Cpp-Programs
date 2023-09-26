#include <iostream>
using namespace std;
int main()
{
    int option, banking, amount, current_bal;
    int Rs = 3000;

    cout << "1. Banking\t2.Quit" << endl;
    cout << " enter the Banking :";
    cin >> banking;
    if (banking == 2)
    {
        return 0;
    }
    else
    {
        cout << " 1. Withdraw\t2.deposit\n3.Balance\t4.Quit." << endl;
        cout << "enter the  option :  ";
        cin >> option;
        switch (option)

        {

        case 1:
            cout << "withdraw" << endl;
            break;
        case 2:
            cout << "deposit" << endl;
            break;
        case 3:
            cout << "Balance" << endl;
            break;
        case 4:
            cout << "Quit" << endl;
            break;

        default:
            cout << "enter the valid no";
            break;
        }
    }
    if (option = 1)
    {
        cout << "enter the amount : ";
        cin >> amount;
        cout << "current balance :" << current_bal;
        current_bal = amount - Rs;
    }
    else if (option = 2)
    {
        cout << "enter the amount : ";
        cin >> amount;
        cout << "current balance : " << current_bal;
        current_bal = amount + Rs;
    }
}