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
    comp operator+(comp ca)
    {
        comp temp;
        temp.r=r+ca.r;
        temp.i=i+ca.i;
        return temp;
    }
    comp operator-(comp cb)
    {
        comp temp;
        temp.r=r-cb.r;
        temp.i=i-cb.i;
        return temp;
    }
    comp operator*(comp cc)
    {
        comp temp;
        temp.r=r*cc.r;
        temp.i=i*cc.i;
        return temp;
    }
    void operator==(comp cd)
    {
        if(r==cd.r && i==cd.i)
        {
            cout<<"real "<<r<<" = "<<cd.r<<" & "<<"imaginary "<<i<<" = "<<cd.i<<endl;
        }
        else
        {
            cout<<"not equal"<<endl;
        }
    }
};
int main()
{
    comp c1,c2,c3,c4,c5,c6;
    c1.setdata(3,6);
    c2.setdata(5,8);
    c3=c1+c2;
    c4=c1-c2;
    c5=c1*c2;
    c6=c3-c1;
    c6==c2;
    c1.showdata();
    c2.showdata();
    c3.showdata();
    c4.showdata();
    c5.showdata();
    c6.showdata();

    return 0;
}
