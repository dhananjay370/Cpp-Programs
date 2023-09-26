#include <iostream>
using namespace std;
class stud
{
   int size = 5;
   int roll;
    int mark;
   //  int total;
public:
   void getdata();
   void showdata();
   void total();
   
};
void stud::getdata()
{
   cout << "enter the size:";
   cin >> size;
   cout << "enter the roll no: ";
   cin >> roll;
   for (int i = 0; i < 5; i++)
   {
      cout << "enter the marks:" << mark << endl;
   }
}
void stud::total()
{
   int total;
   for (int i = 0; i < 5; i++)
   {
      total += mark;
      cout << "total marks: " << total << endl;
   }
}
int main()
{
   stud s;
   s.getdata();
   s.total();
   return 0;
}