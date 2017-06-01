#include<iostream>
using namespace std;
int main()
{
int N,sum=0,i;
cout<<"enter the number"<<endl;
cin>>N;
for(i=1;i<=N;i++)
{
sum=sum+N%10;
N=N/10;
}
cout<<"The sum is"<<sum<<endl;
return 0;
}
