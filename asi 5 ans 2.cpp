#include<iostream>
using namespace std;
class increment
{
    int a;
public:
    void setdata(int x)
    {
        a=x;
    }
    void showdata()
    {
        cout<<a<<endl;
    }
    void operator++()
    {
        a++;
    }
    void operator--()
    {
        a--;
    }
};
int main()
{
    increment i1,i2;
    i1.setdata(5);
    i2.setdata(7);
    ++i1;
    --i2;
    i1.showdata();
    i2.showdata();
    return 0;

}
