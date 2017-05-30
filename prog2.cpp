#include<iostream>

#include<cmath>
using namespace std;
int main()
{
 float a,b,c,d,e,f,g,h;
 cout << "if the quadratic equation is ax2+bx+c=0" << endl;
 cin >> a>>b>>c;
 d=(b*b)-4*a*c;
 if(d>0)
 {
  e=(-b+sqrt(d))/2*a;
  f=(-b-sqrt(d))/2*a;
  cout << "root are\t" << e;
  cout << "and:\t" << f;
 }
 else if(d==0)
 {
  e=(-b+sqrt(d))/2*a;
  f=(-b+sqrt(d))/2*a;
  cout << "root are\t" << e;
  cout << "and:\t" << f;
 }
 else
 {
  e=(-b+sqrt(-d))/2*a;
  f=(-b-sqrt(-d))/2*a;
  cout << "the roots are imaginary" << e;
  cout << "the roots are imaginary" << f;
 }
 return 0;
}
