#include<iostream>
using namespace std;
class fraction
{
    long numerator,denominator;
public:
    fraction(long n=0,long d=0)
    {
        cout<<n<<"/"<<d<<endl;
    }
    void setdata(int x,int y)
    {
        numerator=x;
        denominator=y;
        cout<<"numerator : "<<numerator<<endl<<endl;
        cout<<"denominator : "<<denominator<<endl<<endl;
    }
    void operator++(int)
    {
        numerator++;
        denominator++;
        cout<<numerator<<"/"<<denominator<<endl;
    }
    void operator++()
    {
        numerator++;
        denominator++;
        cout<<numerator<<"/"<<denominator<<endl;
    }
    void showdata()
    {
        cout<<numerator<<"/"<<denominator<<endl;
    }
};
int main()
{
    cout<<"f1 : ";
    fraction f1;
    cout<<"f2 : ";
    fraction f2;
    cout<<endl<<"Enter 1st fraction value"<<endl<<endl;
    f1.setdata(2,3);
    cout<<"f1++ : ";
    f1++;
    cout<<endl;
    cout<<"++f1 : ";
    ++f1;
    cout<<endl<<"Enter 2nd fraction value"<<endl<<endl;
    f2.setdata(1,2);
    cout<<"f2 = ++f1"<<endl;
    cout<<endl;
    cout<<"++f1 : ";
    ++f1;
    f2=f1;
    cout<<"f1 : ";
    f1.showdata();
    cout<<"f2 : ";
    f2.showdata();

}
