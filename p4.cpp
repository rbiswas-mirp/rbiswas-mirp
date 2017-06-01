#include<iostream>
#include<cmath>
using namespace std;
int main()
{
double a,b,c,D,r1,r2,ns;
cout<<"Enter the value of coefficients"<<endl;
cin>>a>>b>>c;
D=b*b-4*a*c;
if(a>=0)
{
if(D>=0)
{
r1=(sqrt(D)-b)/(2*a);
r2=(-1*sqrt(D)-b)/(2*a);
cout<<"The roots are "<<r1<<r2<<endl;
}
else
{
ns=(sqrt(-1*D))/2*a;
b/=(-1*2*a);
cout<<"The roots are "<<b<<"+ i("<<ns<<")and"<<b<<"-i("<<-1*ns<<")"<<endl;
}
}
else
cout<<"The root is"<<-1*c/b<<endl;
}

