#include<iostream.h>
#include<conio.h>
void main()
{
int i, j, n, sum=0, series;
clrscr();
cout<<"input the value";
cin>>n;
for(i=1; i<=n; i++)
{
series=0;
for(j=1; j<=i; j++)
{
sum+=j;
series+=j;
cout<<j;
if(j<i)
{
cout<<"+";
}
}
cout<<"="<<series<<"\n";
}
cout<<"the sum of the series:"<<sum<<"\n";
getch();
}