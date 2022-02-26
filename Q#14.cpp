#include<iostream>
using namespace std;
void RadiusOfCircle(int P, int radius)
  {
      double pi=3.14159;
      double res= pi*radius*radius;
      cout<<"Radius Of Circle is "<<res;
  }
void AreaOfRect(int width,int length)
{
   double res=length*width;
   cout<<"Area Of rectangle is "<<res;
}
void AreaOfTri(int BaseLength, int TriangleHeight)
{
    double res=BaseLength*TriangleHeight*0.5;
    cout<<"Area Of triangle is "<<res;
}
int main()
{
  double pi = 3.14159;
    int num,radius,width,length,BaseLength,TriangleHeight;
  cout<<"Enter a number 1 for Radius Of Circle  :";
  cout<<"Enter a number 2 for Area Of rectangle  :";
  cout<<"Enter a number 3 for Area Of triangle  :";
  cout<<"Enter a number 4 for  quit :";
  cin>>num;
  switch(num)
  {
  case 1:
       cout<<"Enter value of radius of circle :";
       cin>>radius;
       if(radius<0)
   {
       cout<<"sorry negitive input is not allowed";
       break;
   }
       RadiusOfCircle(pi,radius);
  break;
  case 2:
    cout<<"Enter value of WIDTH of rectangle :";
   cin>>width;
   if(width<0)
   {
       cout<<"sorry negitive input is not allowed";
       break;
   }
   cout<<"Enter value of LENGTH of rectangle :";
   cin>>length;
   if(length<0)
   {
       cout<<"sorry negitive input is not allowed";
       break;
   }
  AreaOfRect(length,width);
  
  break;
  case 3:
  
  cout<<"Enter value of base LENGTH of triangle :";
   cin>>BaseLength;
   if(BaseLength<0)
   {
       cout<<"sorry negitive input is not allowed";
       break;
   }
   cout<<"Enter value of TriangleHeight of triangle :";
   cin>>TriangleHeight;
   if(TriangleHeight<0)
   {
       cout<<"sorry negitive input is not allowed";
       break;
   }
   AreaOfTri(BaseLength,TriangleHeight);
  
  break;
  case 4:
  
  cout<<"Your Program is come to end here :";
  
  break;
  default:
  cout<<"sorry you entered wrong number :";
  }

 return 0;
 }