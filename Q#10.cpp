#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"press any button from your keyboard"<<endl;
    cin>>ch;
    if(isdigit(ch))
    {
    cout<<"your entered char is digit";
    }
   else if(ch>='a' && ch<='z')
    {
        cout<<"your entered char is small letter";
    }
    else if(ch>='A' && ch<='Z')
    {
        cout<<"your entered char is capital letter";
    }
    else
    {
        cout<<"your entered char is a special character";
    }
}
