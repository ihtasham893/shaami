#include<iostream>
using namespace std; 
int main()
{
int month,days;//declaration
{
cout<<"Enter a day(1-31) : "; // output on screen
cin>>days;
cout<<"Enter  a month(1-12) :";  // output on screen
cin>>month;

if((days>=1 || days<=31) && (month==12 && month<3))//checking condition
{
  cout<<"season is winter"<<endl;  // output on screen
} 
else if((days>=1 || days<=31) && (month>=3 && month<=6))//checking condition
{
  cout<<"season is spring"<<endl;  // output on screen
} 
else if((days>=1 || days<=31) && (month>=6 && month<=9))//checking condition
{
  cout<<"season is summer"<<endl;  // output on screen
} 
else if((days>=1 || days<=31) && (month>=9 && month<=12))//checking condition
{
  cout<<"season is Fall"<<endl; // output on screen
}
else // when no one condition is matched
{
cout<<"sorry! you give wrong input";// output on screen
}
 return 0;
}