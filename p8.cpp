#include<iostream>
using namespace std;
int main()
{
int i,n;
double max=-9999,min=+9999;
cout<<"Enter the value of N"<<endl;
cin>>n;
cout<<"Enter the numbers"<<endl;
double a[n];
for(i=0;i<n;i++)
{
cin>>a[i];

if(a[i]>=max)
max=a[i];


if(a[i]<=min)
min=a[i];

}
cout<<"The maximum is"<<max<<endl;
cout<<"The minimum is"<<min<<endl;
return 0;
}


