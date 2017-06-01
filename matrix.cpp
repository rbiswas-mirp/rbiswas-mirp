#include<iostream>
using namespace std;
int main()
{
int r,c,i,j;
cout<<"Enter the number of rows and columns"<<endl;
cin>>r>>c;
cout<<"Enter the numbers of the matrix"<<endl; 
double a[r+1][c+1];
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
cin>>a[i][j];
}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
a[r][j]=1;
a[i][c]=1;
}
}

for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(a[i][j]!=0)
{
if((((a[i][j-1]==0)||(a[i][j+1]==0))||(a[i+1][j]==0))||(a[i-1][j]==0))
a[i][j]=2;
}
}
}
for(i=0;i<r+c;i++)
{
if(a[i][0]!=0)
a[i][0]=2;
if(a[0][i]!=0)
a[0][i]=2;
if(a[i][c-1]!=0)
a[i][c-1]=2;
if(a[r-1][i]!=0)
a[r-1][i]=2;
}

for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
cout<<a[i][j];
}
cout<<endl;
}

return 0;
}

