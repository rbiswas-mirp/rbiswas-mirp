#include<iostream>
using namespace std;
int main()
{
int n,i;
double a[n],max1=-10000,max2=-10000,t;
cout<<"enter the value of n"<<endl;
cin>>n;
cout<<"enter the numbers"<<endl;
for(i=0;i<n;i++)
{
cin>>a[i];
}
for(i=0;i<n;i++)
{
if(a[i]>max1)
max1=a[i];
if(a[i+1]>max2)
max2=a[i+1];
if(max2>max1)
t=max1;
max1=max2;
max2=t;
}
cout<<"The 2nd maximum is"<<max2<<endl;
return 0;
}


