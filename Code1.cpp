#include<iostream.h>
#include<conio.h>
void swap(int *a, int *b)
{
int temp =*a;
*a=*b;
*b=temp;
}
int main()
{
clrscr();
cout<<"PRATEEK SINGH \n 1/23/SET/BCS/362 \n CLASS : 3A \n ";
int x,y;
cout<<"Enter the value for X: \n";
cin>>x;
cout<<"Enter the value for Y:\n";
cin>>y;
swap(&x,&y);
cout<<"The swaped value of X: \t"<<x<<endl;
cout<<"The swaped value of Y: \t"<<y<<endl;
getch();
}
