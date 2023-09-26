#include <iostream>
using namespace std;
int main()
{
    int age;
    string license;
    cout << "Enter Your Age : ";
    cin >> age;
    if (age >= 18)
    {
        cout << "Do you have driving license? : ";
        cin >> license;
        if (license == "yes" || license == "Yes")
        {
            cout << "You can drive safely...";
        }
        else
        {
            cout << "You cannot drive because you don't have driving license.";
        }
    }
    else
    {
        cout << "Sorry you cannot drive!";
    }
}
