#include<iostream.h>
#include<conio.h>
void main()
{
int n, rev=0, rem, temp;
clrscr();
cout<<"enter a number";
cin>>n;
temp=n;
while(n>0)
{
rem=n%10;
rev=(rev*10)+rem;
n=n/10;
}
if(rev==temp)
{
cout<<temp<<"is palindrome number";
}
else{
cout<<temp<<"is not palindrome number";
}
getch();
}