#include<iostream>
using namespace std;
class stdu{
    int rn[5];
    int mark[5];
    public:
     int getdata();
     int show();
};
int stdu:: getdata()
{
   cout<<"enter the  roll no  :"<<endl;
   cin>>rn;
   cout<<"enter thevmark of a stuent";
   for(int i=0;i<5;i++)
   {
      cin>>mark[i];
   }

}
int stdu::show()
{
   cout<<"printing  informtions  of student"<<endl<<rn<<endl;
   for(int i=0;i<5;i++)
   {
      cout<<"marks of "<<i+1<<"subjeact"<<mark[i]<<endl;
   }
}
int main()
{
   stdu s;
   s.getdata();
   s.show();
}