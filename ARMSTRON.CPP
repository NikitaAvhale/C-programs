#include<iostream.h>
#include<conio.h>
void main()
{
int n, rem,cube,temp,sum=0;
clrscr();
cout<<"enter a number";
cin>>n;
temp=n;
while(n>0)
{
rem=n%10;
cube=rem*rem*rem;
sum= sum+cube;
n=n/10;
 }
if(sum==temp){
cout<<temp<<"is armstrong number"<<temp;
} else{
cout<<temp<<"is not armstrong number"<<temp;
}
getch();
}