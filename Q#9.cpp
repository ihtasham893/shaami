#include<iostream>
using namespace std;
int main()
{
    int days;
      cout<<"-----------{welcome to library mangement system}------------"<<endl;
     cout<<"please how many days you are late?"<<endl;
     cin>>days;
     if(days<=5)
     {
         cout<<"you to have pay fine of 50 rupees"<<endl;
     }
      if(days>=6 && days<=10)
     {
         cout<<"you have to pay fine of 100 rupees"<<endl;
     }
      if(days>10 && days<30)
     {
         cout<<"you have to pay fine of 150 rupees"<<endl;
     }  
      if(days>30)
     {
         cout<<"we are extremely sorry! your Membership has been cancelled"<<enl;
     }
}
