#include<iostream>
using namespace std;
int main()
{
    cout<<"             Let's start and play a lottery game         "<<endl;
    int num1,num2,num3;
     cout<<"Enter first your number"<<endl;
     cin>>num1;
     cout<<"Enter second your number"<<endl;
     cin>>num2;
     cout<<"Enter third your number"<<endl;
     cin>>num3;
     srand(time(NULL));
     int number1= rand() % 9+0;
     int number2= rand() % 9+0;
     int number3= rand() % 9+0;
     if(num1==number1)
     {
         cout<<"congratulations! one number is matched";
     }
     else if(num1==number1&& num1==number2)
     {
         cout<<"congratulations! two numbers are matched"<<endl;
     }
     else if(num1==number1 && num1==number2 && num1==number3)
     {
       cout<<"congratulations! three numbers are matched"<<endl;   
     }
       else if(num2==number1)
     {
         cout<<"congratulations! one number is matched"<<endl;
     }
     else if(num2==number1&& num1==number2)
     {
         cout<<"congratulations! two numbers are matched"<<endl;
     }
     else if(num2==number1 && num1==number2 && num1==number3)
     {
       cout<<"congratulations! three numbers are matched"<<endl;   
     }
        else if(num3==number1)
     {
         cout<<"congratulations! one number is matched"<<endl;
     }
     else if(num3==number1 && num1==number2)
     {
         cout<<"congratulations! two numbers are matched"<<endl;
     }
     else if(num3==number1 && num1==number2 && num1==number3)
     {
       cout<<"congratulations! three numbers are matched"<<endl;   
     }
     else
     {
         cout<<"Oh!no numbers are matched at all, Better luck next time!"<<endl;
     }
}
