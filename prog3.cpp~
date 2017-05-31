#include<iostream>
#include<cmath>
using namespace std;
int main()
{ 
 float a,b,c,d,e,f,g,h,i,j,k,l;
 cout << "enter the coordinate of A (x,y)" << endl;
 cin >> a >> b;
 cout << " enter the value of B" << endl;
 cin >> c >> d;
 cout << "enter the value of C" << endl;
 cin >> e >> f;
 
 g=pow((a-c),2)+pow((b-d),2);
 h=sqrt(g);
 i=pow((c-e),2)+pow((d-f),2);
 j=sqrt(i);
 k=pow((a-e),2)+pow((b-f),2);
 l=sqrt(k);

 if(h==j&&h==l&&l==j)
 cout << "the entered coordinate is an eqilateral triangle" << endl;
 else if((h==j&&j!=l)||(h==l&&l!=j)||(l==j&&j!=h))
 cout << " the entered coordinates is an isosceles triangle" << endl;
 else if(h!=l&&h!=j&&j!=l)
 cout << " the entered coodinates is a scalene triangle" << endl;
 return 0;
}
