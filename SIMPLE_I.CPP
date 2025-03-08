#include<iostream.h>
#include<conio.h>
float simple_interest(float p, int n=10, int r=7)
{
return ((p*r*n)/100);
}
void main()
{
float pri;
clrscr();
cout<<"enter the principle amt:";
cin>>pri;
cout<<"simple interest is:"<<simple_interest(pri);
getch();
}
