#include<iostream>
using namespace std;
int main()
{
int A,B,C,marks;
cout<<"Enter the cutoffs for A,B,C respectively"<<endl;
cin>>A>>B>>C;
cout<<"Enter the student's marks"<<endl;
cin>>marks;
if(((A>B)&&(A>C))&&(B>C))
{
cout<<"Cutoffs are valid"<<endl;
if(marks>A)
cout<<"grade A"<<endl;
else if(marks>B)
cout<<"grade B"<<endl;
else if(marks>C)
cout<<"grade C"<<endl;
else
cout<<"grade D Congrats you failed now get out of the school"<<endl;
}
else
cout<<"Cutoffs are invalid"<<endl;
return 0;
}
