#include<iostream>
using namespace std;
class time
{
    int h,m,s;
public:
   void operator>>(time t)
   {
       cout<<"Enter hours :";
       cin>>h;
       cout<<endl;
       cout<<"Enter minutes :";
       cin>>m;
       cout<<endl;
       cout<<"Enter seconds :";
       cin>>s;
       cout<<endl;

   }
   void operator<<(time t)
   {
       cout<<"Hour : "<<h<<endl<<endl<<"minute : "<<m<<endl<<endl<<"second : "<<s<<endl<<endl;
   }
   int operator==(time t)
   {
       if(h==t.h && m==t.m && s==t.s)
       {
           return 0;
       }
       else
       {
           return 1;
       }
   }
};
int main()
{
    int check;
    time t1,t2;
    cout<<"Enter first time"<<endl;
    cout<<"---------------------------------------"<<endl;
    t1>>t1;
    cout<<"first time"<<endl;
    t1<<t1;
    cout<<"Enter second time"<<endl;
    cout<<"---------------------------------------"<<endl;
    t2>>t2;
    cout<<"second time"<<endl;
    t2<<t2;
    check=t1==t2;
    if(check==0)
    {
        cout<<"Times are same"<<endl;
    }
    else
    {
        cout<<"Time not same"<<endl;
    }
    return 0;






}
