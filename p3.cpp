#include<iostream>
using namespace std;
int main()
{
double ax,ay,bx,by,cx,cy,AB,BC,CA,x;
cout<<"Enter the coordinates"<<endl;
cin>>ax>>ay>>bx>>by>>cx>>cy;
AB=(ax-bx)*(ax-bx)+(ay-by)*(ay-by);
BC=(cx-bx)*(cx-bx)+(cy-by)*(cy-by);
CA=(ax-cx)*(ax-cx)+(ay-cy)*(ay-cy);
x=(ax*(by-cy)+bx*(cy-ay)+cx*(ay-by));
if(x>0)
{
if((AB==BC)&&(AB==CA))
cout<<"EQUILATERAL"<<endl;
else if((AB==BC)||(AB==CA)||(BC==CA))
cout<<"ISOSCELES"<<endl;
else
cout<<"SCALENE"<<endl;
}
else
cout<<"Triangle can't be formed"<<endl;

return 0;
}
