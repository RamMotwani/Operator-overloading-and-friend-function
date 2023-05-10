#include<iostream>
using namespace std;
class stringcase
{
    char str[100];
public:
    void setstring()
    {
        cout<<"Enter a string "<<endl;
        gets(str);
    }
    void showstring()
    {
        cout<<endl<<"String is :"<<endl;
        cout<<str<<endl;
    }
    void operator!()
    {
        cout<<endl<<"Case changed"<<endl;
        int i;
        for(i=0;str[i]!='\0';i++)
        {
            if(str[i]>='a' && str[i]<='z')
            {
                str[i]=str[i]-32;
            }
            else if(str[i]>='A' && str[i]<='Z')
            {
                str[i]=str[i]+32;
            }
        }
        cout<<str;

    }
};
int main()
{
    stringcase s;
    s.setstring();
    s.showstring();
    !s;
}
