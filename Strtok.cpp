#include <cstring>
#include <iostream>
using namespace std;
int main()
{
    char ch[] = "My name is Dhananjay and i am from Amravati";
    char *word = strtok(ch, " ");
    cout << word;
    int a = 45;
    int &b = a;
    cout << b;
    return 0;
}