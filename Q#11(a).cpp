#include<iostream>
#include<unistd.h> // library for delay
#include<ctype.h>  //library for checking lower and upper case
using namespace std;
int main()
{ 
 char alpha1,alpha2; //declaration
 cout<<"Enter first letter of two colors which you want to mix"<<endl;// output on screen
 cin>>alpha1;//taking input from user
 cin>>alpha2; //taking input from user
 if(islower(alpha1) && islower(alpha2))
  {
 if((alpha1=='r' || alpha1=='b') && (alpha2=='b' || alpha2=='r')) //checking condition
 {
 cout<<"please! hold on your colors are mixing"<<endl; // output on screen
 sleep(1); //delay in output 
 cout<<"Finally! you got a new color which  is purple"<<endl;// output on screen
 }
 else if((alpha1=='r' || alpha1=='y') && (alpha2=='y' || alpha2=='r'))//checking condition
 {
 cout<<"please! hold on your colors are mixing"<<endl;// output on screen
 sleep(1);//delay in output 
 cout<<"Finally! you got a new color which  is orange"<<endl;// output on screen
 }
 else if((alpha1=='y'|| alpha1=='b') && (alpha2=='b' || alpha2=='y'))//checking condition
 {
 cout<<"please! hold on your colors are mixing"<<endl;// output on screen
 sleep(1);//delay in output 
 cout<<"Finally! you got a new color which  is green"<<endl;// output on screen
 }
 else //checking condition
 {
 cout<<"please! hold on your colors are mixing"<<endl;// output on screen
 sleep(1);//delay in output 
 cout<<"oh sorry! you enterd invalid colors";// output on screen
 }
 }
 else // when no one condition is matched
 {
 cout<<"please! hold on your colors are mixing"<<endl;// output on screen
 sleep(1);//delay in output 
 cout<<"oh sorry! you enterd invalid colors";// output on screen
 }
  return 0;
  }