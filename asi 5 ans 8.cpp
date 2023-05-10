#include<iostream>
using namespace std;
class matrix
{
    int a[3][3];
public:
    void setdata()
    {
        cout<<"Enter Matrix Elements (3x3)"<<endl;
        int i,j;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cin>>a[i][j];
            }
        }
        cout<<endl<<endl;
    }
    void showdata()
    {
        cout<<"Matrix is :"<<endl;
         int i,j;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cout<<a[i][j];
                cout<<"   ";
            }
            cout<<endl;
        }
    }
    void operator-()
    {
        cout<<endl<<" Negative Matrix is :"<<endl;
         int i,j;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cout<<-a[i][j];
                cout<<"   ";
            }
            cout<<endl;
        }
    }
};
int main()
{
    matrix m1;
    m1.setdata();
    m1.showdata();
    -m1;
    return 0;
}
