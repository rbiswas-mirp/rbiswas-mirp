#include<iostream>
using namespace std;
int main()
{
	int N,sum=0;
	cout<<"enter the number"<<endl;
	cin>>N;
	for(;N>0;)
	{
		sum=sum+N%10;
		N=N/10;
	}
	cout<<"The sum is: "<<sum<<endl;
return 0;
}
