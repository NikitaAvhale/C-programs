#include<iostream.h>
#include<conio.h>
void main()
{
int n, i;
clrscr();
cout<<"enter an integers:";
cin>>n;
cout<<"factor of"<< n <<"are:";
for(i=1; i<=n; ++i){
if(n%i==0)
cout<<i<<" ";
}
getch();
}
