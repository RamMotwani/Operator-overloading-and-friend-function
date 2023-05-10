#include<iostream>
using namespace std;
class numbers
{
    int n1,n2,n3;
public:
    void setdata(int x,int y,int z)
    {
        n1=x;
        n2=y;
        n3=z;
    }
    void showdata()
    {
        cout<<n1<<endl<<n2<<endl<<n3<<endl;
    }
    void operator-()
    {
        n1=-n1;
        n2=-n2;
        n3=-n3;
    }
};
int main()
{
    numbers s1;
    s1.setdata(5,6,7);
    cout<<"normal no.s"<<endl;
    s1.showdata();
    cout<<"converted to negative"<<endl;
    -s1;
    s1.showdata();
    return 0;
}
