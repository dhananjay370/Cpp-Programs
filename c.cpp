#include <iostream>
using namespace std;
class database
{
public:
    string name;
    string dob;
    string phone_no;
};
int main()
{
    database dhananjay;
    dhananjay.name = "Dhananjay Gajanan Sable";
    dhananjay.dob = "16-02-2000";
    dhananjay.phone_no = "8208103194";

    database nikhil;
    nikhil.name = "Nikhil Sadanand Sable";
    nikhil.dob = "25-7-1999";
    nikhil.phone_no = "7589739923";

    database shubham;
    nikhil.name = "Shubham Gajanan Sable";
    nikhil.dob = "27-4-1997";
    nikhil.phone_no = "8485004001";

    cout << dhananjay.name << endl
         << dhananjay.dob << endl
         << dhananjay.phone_no << endl;

    cout << "------------------------" << endl;

    cout << nikhil.name << endl
         << nikhil.dob << endl
         << nikhil.phone_no << endl;

    cout << "------------------------" << endl;

    cout << shubham.name << endl
         << shubham.dob << endl
         << shubham.phone_no << endl;
}
