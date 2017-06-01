#include<iostream>
using namespace std;
int main()
{
int N,i;
double a[N];
double sum,avg;
cout<<"enter the value of N"<<endl;
cin>>N;
cout<<"Enter the N numbers"<<endl;
for(i=0;i<N;i++)
{
cin>>a[i];
sum = sum +a[i];
}
avg=sum/N;
cout<<"The average is"<<avg<<endl;
return 0;
}
