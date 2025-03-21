#include<iostream.h>
#include<conio.h>
void main()
{
int * ptr=new int;
*ptr=10;
clrscr();
cout<<"the value is:"<<*ptr<<endl;
delete ptr;
getch();
}
