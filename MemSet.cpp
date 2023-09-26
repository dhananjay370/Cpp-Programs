#include <cstring>
#include <iostream>
using namespace std;
int main()
{
    char dest[50];
    char ch = '*';
    memset(dest,20,ch);
    cout << "After calling memset" << endl;
    cout << "dest contains " << dest;
    return 0;
}