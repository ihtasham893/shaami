#include<iostream>
#include<unistd.h>
#include<ctype.h>
using namespace std;
int main()
{ 
 char num,num2;
 int mixture;
 cout<<"Enter first letter of two colors which you want to mix"<<endl;
 cin>>num;
 cin>>num2;
 {
 mixture=num+num2;
 switch(mixture)
 {
  case 212:
  {
  cout<<"please! hold on your colors are mixing"<<endl;
 sleep(1);
  cout<<"Finally! you got a new color which  is purple"<<endl;
  } 
  break;
  case 235:
  {
  cout<<"please! hold on your colors are mixing"<<endl;
 sleep(1);
  cout<<"Finally! you got a new color which  is orange"<<endl;
  }
  break;
  case 219:
  {
  cout<<"please! hold on your colors are mixing"<<endl;
 sleep(1);
  cout<<"Finally! you got a new color which  is green"<<endl;
  }
  break;
 default:
 cout<<"please! hold on your colors are mixing"<<endl;
 sleep(1);
 cout<<"oh sorry! you enterd invalid colors";
 break;
  }
  }
  
  return 0;
  }