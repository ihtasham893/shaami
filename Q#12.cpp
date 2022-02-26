#include<iostream>
using namespace std;
int main()
{
 int hardness,tensile_strength; //declaration
 double carbon_content; //declaration
 cout<<"Enter quantity of hardness involve in grade:";
 cin>>hardness;//taking input from user
 cout<<"Enter carbon_content involve in grade:";
 cin>>carbon_content;//taking input from user
 cout<<"Enter tensil_strength involve in grade:";
 cin>>tensile_strength;//taking input from user
 if(hardness>50 && carbon_content<0.7 && tensile_strength>5600) // 1st//checking condition
 {
 cout<<"grade of steel is 10";// output on screen
 }
 else if( hardness>50 && carbon_content<0.7) //2nd//checking condition
 {
 cout<<"grade of steel is 9";// output on screen
 }
 else if(carbon_content<0.7 && tensile_strength>5600)//3rd //checking condition
 {
 cout<<"grade of steel is 8";// output on screen
 }
 else if(hardness>50 && tensile_strength>5600)  //4th//checking condition
 {
 cout<<"grade of steel is 7 ";// output on screen
 }
 else if(hardness>50 || carbon_content<0.7 || tensile_strength>5600) // 5th //checking condition
 {
 cout<<"grade of steel is 6";// output on screen
 }
 else  //when no one condition is matched
 cout<<"grade of steel is 5";// output on screen
 return 0;
 }