#include<iostream.h>
#include<conio.h>
class distance
{
int feet;
int inches;
public:
void getdata();
void putdata();
void add();
};
void distance:: getdata()
{

cout<<"enter feet";
cin>>feet;
cout<<"enter inches";
cin>>inches;
}
void distance:: putdata()
{
cout<<"Feet"<<feet<<endl;
cout<<"Inches"<<inches<<endl;
}
void distance:: add(distance d1, distance d2)
{
feet=d1.feet+d2.feet;
inches=d1.inches+d2.inches;
feet=feet+(inches/12);
inches=(inches%12);

}

void main()
{
clrscr();
distance d3;
d3.add(d1,d2);
d3.putdata();

getch();
}