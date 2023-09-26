#include<iostream>
using namespace std;

// Login and Registration System.
class Registration{
    public:
        string name;
        int phone_no;
        string email_id;
};
class login{
    private:
        int login_id;
        string pass;
};
int main(){
    Registration r;
    string emailid;
    cout<<"----------Registration Detail------------"<<endl<<endl;
    cout<<"Enter Your Name : ";
    cin>>r.name;
    cout<<"Enter Your Phone Number : ";
    cin>>r.phone_no;    
    cout<<"Enter Your Email Id : ";
    cin>>emailid;
    
    
    cout<<r.name<<endl<<r.phone_no<<endl<<r.email_id<<endl;

    
    

    


}