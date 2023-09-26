#include <iostream>
using namespace std;
int main()
{
    int marks, maxMarks;
    cout << "Enter Maximum Marks : ";
    cin >> maxMarks;
    cout << "Enter Your Marks : ";
    cin >> marks;
    float percent = (float)marks / maxMarks * 100;
    cout << "Your Percentage is : " << percent << endl;
    if (percent >= 85)
    {
        cout << "Great Your Grade is (A).";
    }
    else if (percent >= 65)
    {
        cout << "Your Grade is (B).";
    }
    else if (percent >= 50)
    {
        cout << "Your Grade is (C).";
    }
    else if (percent >= 35)
    {
        cout << "Your Grade is (D).";
    }
    else
    {
        cout << "Sorry! Your Fail.";
    }
}