#include<iostream>
using namespace std;
int main()
{
int n,i,j,x,y;
cout<<"Enter the value of n"<<endl;
cin>>n;
for(i=0;i<=n;i++)
{
x=i*(i-1)/2;
y=(i*(i+1)/2)-1;
for(j=x;j<=y;j++)
{
cout<<j<<" ";
}
cout<<endl;
}
return 0;
}
