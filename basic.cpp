#include <iostream>
using namespace std;
void greet(char *str);
int main()
{
    char str[50];
    cout << "Enter Your First Name : ";
    cin >> str;
    greet(str);
    return 0;
}

void greet(char *str){
    cout << "Hello Dear " << str << ",\nYou are Selected in our Company\nYou will get joining later in two Month\nThanks and Regard";
}
