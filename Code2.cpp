#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
int a[10],i,x=0;
cout<<"PRATEEK SINGH \n 1/23/SET/BCS/362 \n CLASS : 3A \n ";
cout<<"Enter the values for array : \n";
for(i=0; i<10;i++)
{
cin>>a[i];
x=x+a[i];
}
cout<<"The sum of all term of array is :"<<x;
getch();
}
