#include<iostream>
using namespace std;
class comp
{
    int r,i;
public:
    void setdata(int x,int y)
    {
        r=x;
        i=y;
    }
    void showdata()
    {
        cout<<"real = "<<r<<" imaginary = "<<i<<endl;
    }
    friend comp operator+(comp,comp);
};
comp operator+(comp ca, comp cb)
{
    comp temp;
    temp.r=ca.r+cb.r;
    temp.i=ca.i+cb.i;
    return temp;
}
int main()
{
    comp c1,c2,c3;
    c1.setdata(5,6);
    c2.setdata(2,3);
    c3=c1+c2;
    c1.showdata();
    c2.showdata();
    c3.showdata();
    return 0;
}
