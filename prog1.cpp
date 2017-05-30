#include<iostream>
#include<math.h>
using namespace std;
int main()
{
   float a, b, c, d, e, f, g, h;
   cout<<"Enter the co-efficients of a, b & c respectively: ";
   cin >>a >>b >>c;
   d = (b*b)-4*a*c;
   if(d>0)
   {
     e=-b+sqrt(d)/2*a;
     f=-b-sqrt(d)/2*a;
     cout<<"The first root of the equation is " <<e <<endl;
     cout<<"The second root of the equation is " <<f <<endl;
   }
   else
   if(d==0)
   {
     e=-b+sqrt(d)/2*a;
     f=-b+sqrt(d)/2*a;
     cout<<"The first root and the second root of the equation are same and are equal to " <<e <<endl;
   }
   else
   {
     g=-b/a;
     h=sqrt(-d)/2*a;
     e=g+h;
     f=g-h;
     cout<<"The first root of the equation is " <<e <<"i" <<endl;
     cout<<"The second root of the equation is " <<f <<"i" <<endl;
   }
   return 0;
}
     
     
