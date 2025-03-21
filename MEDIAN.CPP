#include<iostream.h>
#include<conio.h>
class median
{
int *p, n, i;
public:
median()
{
cout<<"enter the size of array";
cin>>n;
p=new int[n];
cout<<"enter element of the array:";
for(i=0; i<n;i++)
{
cin>>p[i];
}
}
void putdata()
{
if(n%2==1)
{
cout<<"median:"<<p[n/2]<<endl;
} else{
cout<<"median:"<<(p[n/2-1]+p[n/2])/2.0<<endl;
}
}
~median()
{
delete[]p;
}
};
void main()
{
clrscr();
median m;
m.putdata();
getch();
}