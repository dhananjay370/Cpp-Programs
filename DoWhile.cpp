#include <iostream>
using namespace std;

int main()
{
    // Print Number 1 to 100 Using Do-While, While, For Loop.
    int i = 1;
    for (int i = 1; i <= 100; i++)
    {
        cout << "Number : " << i << endl;
    }

    do
    {
        cout << "Number : " << i << endl;
        i++;
    } while (i <= 100);

    while (i <= 100)
    {
        cout << "Number : " << i << endl;
        i++;
    }

    return 0;
}