#include <iostream>
using namespace std;
class BankAccount
{
public:
    int sum(int a, int b)
    {
        cout << "Sum is : " << a + b << endl;
        return a + b;
    }
    int substract(int a, int b)
    {
        cout << "Substraction is : " << a - b << endl;
        return a - b;
    }
    int multiplication(int a, int b)
    {
        cout << "Multiplication is : " << a * b << endl;
        return a * b;
    }
    int division(int a, int b)
    {
        cout << "Division is : " << a / b << endl;
        return a / b;
    }
};
int main()
{
    Calculator calc;
    calc.sum(11, 33);
    calc.division(33, 22);
    calc.multiplication(324, 293);
    calc.substract(5, 2);
}