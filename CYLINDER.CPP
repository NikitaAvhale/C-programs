#include<iostream.h>
#include<conio.h>
class cylinder
{
float radius;
float height , area, volume;
public:
void getdata()
{
cout<<"enter radius"<<endl;
cin>>radius;
cout<<"enter height"<<endl;
cin>>height;
}
void putdata()
{
volume =3.14*radius*radius*height;
cout<<"volume of cylinder"<<volume;
area =2*3.14*radius*radius;
cout<<"area of cylinder"<<area;
}
};

void main()
{
clrscr();
cylinder cy1;
cy1.getdata();
cy1.putdata();
getch();
}