#include<iostream.h>
#include<conio.h>
void main()
{
int a;
clrscr();
cout<<"enter a number";
cin>>a;
for(int i=1; i<=10; ++i){
cout<<a<<"*"<<i<<"="<<a*i<<endl;
}
getch();
}