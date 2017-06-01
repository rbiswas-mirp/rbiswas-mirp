#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int n,i;
double x[n],y[n],area=0;
cout<<"Enter the value of n"<<endl;
cin>>n;
cout<<"Enter the coordinates"<<endl;
for(i=0;i<n;i++)
{
cin>>x[i]>>y[i];
}
for(i=0;i<n-2;i++)
{
area=area+fabs((x[i]*(y[i+1]-y[i+2])+x[i+1]*(y[i+2]-y[i])+x[i+2]*(y[i]-y[i+1]))/2);
}
cout<<"The area is"<<area<<endl;
return 0;
} 

