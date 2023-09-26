#include <iostream>
using namespace std;
class Box
{
public:
    int sum(int a, int b)
    {
        cout << "sum is" << a + b << endl;
        return a + b;
    }
    int sub(int a, int b)
    {
        cout << "sub is" << a - b << endl;
        return a - b;
    }
    int mult(int a, int b)
    {
        cout << "mult is" << a * b << endl;
        return a * b;
    }
    int div(int a, int b)
    {
        cout << "div is" << a / b << endl;
        return a / b;
    }
};
int main()
{
     int a,b;
    Box d;
    cout<<"enter the two number a and b = "<<endl;
    cin>>a>>b;
    d.sum(a,b);
    d.div(a,b);
    d.mult(a,b);
    d.sub(a,b);
}
