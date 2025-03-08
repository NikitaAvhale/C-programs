#include<iostream.h>
#include<conio.h>
int main()
{
int n, fact=1, i;
clrscr();
cout<<"enter a number";
cin>>n;
if(n<0)
{
cout<<"fatorial of negative number doesn't exit"<<n;
}
else
{
for(i=1;i<=n;++i)
{
fact*=i;
}
cout<<"factorial of"<<n<<"="<<fact;
}
getch();
return 0;
}