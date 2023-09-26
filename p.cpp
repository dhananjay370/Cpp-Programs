#include <iostream>
using namespace std;
class Account
{
private:
    double math;

public:
    int sum(int a, int b)
    {
        cout << "sum is = " << a + b << endl;
        return a + b;
    }
    int mult(int a, int b)
    {
        cout << "mult is = " << a * b << endl;
        return a * b;
    }
    int div(int a, int b)
    {
        cout << "div is =" << a / b << endl;
        return a / b;
    }
    int sub(int a, int b)
    {
        cout << "sub is =" << a - b << endl;
        return a - b;
    }
    int mod(int a, int b)
    {
        cout << "remainder is =" << a % b << endl;
        return a % b;
    }
};
int main()
{
    Account m;
    m.sum(10, 67);
    m.div(70, 7);
    m.mult(56, 43);
    m.mod(34, 6);
    m.sub(98, 34);
}