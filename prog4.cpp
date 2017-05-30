#include<stdio.h>
//#include<conio.h>
#define max 50

void selsort(int,int[]);
int main()
{
 int i,size,data[max];
 printf("Enter the no of element");
 for(i=1;i<=size;i++)
  scanf("%d",&data[i]);

 selsort(size,data);
 printf("\n");
 //getch();
}

void selsort(int n, int data[])
{
 int i,j,min,temp;
 printf("\nsorted list");
 for(i=1;i<=n-1;i++)
 {
  min=1;
  for(j=i+1;j<=n;j++)
  {
   if(data[j]<data[min])
      min=j;
  }
  temp=data[i];
  data[i]=data[min];
  data[min]=temp;
 }
 for(i=1;i<=n;i++)
 printf("%d\t"data[i]);
}
