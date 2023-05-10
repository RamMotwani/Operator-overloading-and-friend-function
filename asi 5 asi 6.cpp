#include<iostream>
using namespace std;
class cstring
{
    char s[100];
public:
    void setstring()
    {
        gets(s);
    }
    void showstring()
    {
        cout<<s;
    }
    cstring operator+(cstring n)
    {
        cstring temp;
        int length=0,i;
        while(s[length]!='\0')
        {
            temp.s[length]=s[length];
            length++;
        }
        for(i=0;n.s[i]!='\0';i++)
        {
            temp.s[length]=n.s[i];
            length++;
        }
        temp.s[length]='\0';
        return temp;



    }

};
int main()
{
    cstring str1,str2,str3;
    cout<<"Enter 1st string"<<endl;
    cout<<"----------"<<endl;
    str1.setstring();
    cout<<endl;
    cout<<"1st string is :"<<endl;
    str1.showstring();
    cout<<endl<<endl;
    cout<<"Enter 2nd string"<<endl;
    cout<<"----------"<<endl;
    str2.setstring();
    cout<<endl;
    cout<<"2nd string is :"<<endl;
    str2.showstring();
    cout<<endl<<endl;
    cout<<"After Concatenate both strings :"<<endl<<endl;
    str3=str1+str2;
    str3.showstring();

}
