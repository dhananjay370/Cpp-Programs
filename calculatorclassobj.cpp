#include <iostream>
using namespace std;

class calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int subtract(int a, int b)
    {
        return a - b;
    }
    int multiplication(int a, int b)
    {
        return a * b;
    }
    int division(int a, int b)
    {
        return a / b;
    }
};

int main()
{
    calculator calc;
    int a = calc.multiplication(55, 43);
    cout << a;
}
