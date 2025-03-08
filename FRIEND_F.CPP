#include<iostream.h>
#include<conio.h>
class num2;
class num1
{
int a;
public:
void getdata()
{
cout<<"enter the 1st integer:";
cin>>a;
}
friend int sub(num1 n1, num2 n2);
};
class num2
{
int b;
public:
void getdata()
{
cout<<"enter the 2nd integer:";
cin>>b;
}
friend int sub(num1 n1, num2 n2);
};
int sub(num1 n1, num2 n2){
int diff;
diff=(n1.a - n2.b);
return diff;
}
void main()
{
num1 n1;
num2 n2;
clrscr();
n1.getdata();
n2.getdata();
cout<<"difference is:"<<sub(n1,n2);
getch();
}