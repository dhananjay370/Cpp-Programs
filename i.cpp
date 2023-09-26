#include<iostream>
using namespace std;
class Hello{
    public:
    Hello(string name){
        cout<<"Hello "<<name;
    }
};
int main(){
    Hello h("Dhananjay");
    return 0;
}   
