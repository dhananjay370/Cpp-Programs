#include <iostream>
using namespace std;

// Parent class
class MyClass
{
public:
   void myFunction()
   {int name;
      cout << "Enter the name : ";
      cin>>name;
   }
};

// Child class
class MyChild : public MyClass
{
   public:
   void roll_no(){
      int roll;
      cout<<"enter the roll no :";
      cin>>roll;
   }
};

// Grandchild class
class MyGrandChild : public MyChild, myFunction
{
   public:
   void marks()

    int marks; 
    cout<<"enter the marks:";
    cin 
   
};

int main()
{
   MyGrandChild my;
   my.marks();
   return 0;
}
