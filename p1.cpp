#include<iostream>
using namespace std;
int main()
{
int a,b,c,d,m1,m2;
cout<<"enter four numbers"<<endl;
cin>>a>>b>>c>>d;
m1=a;
if(b>m1)
m1=b;
if(c>m1)
m1=c;
if(d>m1)
m1=d;
cout<<"The largest is "<<m1<<endl;
if(m1==a)
 {
m2=b;
if(c>m2)
m2=c;
if(d>m2)
m2=d;
cout<<"The second largest is"<<m2<<endl;
 }
if(m1==b)
  {
m2=c;
if(a>m2)
m2=a;
if(d>m2)
m2=d;
cout<<"The second largest is"<<m2<<endl;
  }
if(m1==c)
  {
m2=a;
if(b>m2)
m2=b;
if(d>m2)
m2=d;
cout<<"The second largest is"<<m2<<endl;
  }
if(m1==d)
  {
m2=a;
if(c>m2)
m2=c;
if(b>m2)
m2=b;
cout<<"The second largest is"<<m2<<endl;
  }
return 0;
}
