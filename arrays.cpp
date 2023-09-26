#include <iostream>
using namespace std;
class aco
{
    int roll;
    char name[4];
    char result[4];
    int marks[4];

public:
    int getdata();
    int show();
    int total();
};
int aco::getdata()
{
    cout << "enter the roll no:" << endl;
    cin >> roll;

    for (int i = 0; i < 4; i++)
    {
        cin >> roll[i];
    }
    cout << "enter the name:" << endl;
    cin >> name[i];
    cout << "enter the marks:" << endl;
    for (int i = 0; i < 4; i++)
    {
        cin >> marks[i];
    }
}
int aco::total()
{
    int a;
    for (int i = 0; i < 4; i++)
    {
        a = a + marks[i];
    }
}
int aco::show()
{
    cout << "informations of student" << endl
         << "roll no :" << roll << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "marks of " << i + 1 << " subject = " << marks[i] << endl;
    }
    int main()
    {
        aco b[4];
        for (int i = 0; i < 4; i++)
        {
            cout << "enter the detail of :" << i + 1 << " student: ";
            b[i].getdata();
        }
        for (int i = 0; i < 4; i++)
        {
            cout << "personal detail of :" << i + 1 << " student: ";
            b[i].show();
            b[i].total();
        }
        // return 0;
    }
}
