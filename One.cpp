#include <iostream>
#include <cstring>
using namespace std;
int main(int argc, char const *argv[])
{
    // string name;
    // cout<<"Enter Your name : ";
    // getline(cin,name);
    // cout<<"Your name is : "+name;
    char name[] = "Megadeth";
    char hello[] = "Metallica";
    int result = strcmp(name, hello);
    cout<<result;

    return 0;
}
