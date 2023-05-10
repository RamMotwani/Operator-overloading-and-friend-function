#include<iostream>
using namespace std;
class Matrix
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
    Matrix operator+(Matrix m)
    {
        Matrix temp;
        int i,j;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                temp.a[i][j]=a[i][j]+m.a[i][j];
            }
        }
        return temp;
    }
};
int main()
{
    Matrix m1,m2,m3;
    m1.setdata();
    m2.setdata();
    cout<<"First Matrix"<<endl;
    m1.showdata();
    cout<<endl<<"Second Matrix"<<endl;
    m2.showdata();
    m3=m1+m2;
    cout<<endl<<"Addition of matrix is : "<<endl;
    m3.showdata();
    return 0;

}
