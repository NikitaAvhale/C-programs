#include<iostream.h>
#include<conio.h>
class Car
{
protected:
char carname[30];
int release_year;
float price;
};
class Maruti : public  Car
{
 public:
 void getdata()
 {
  cout<<"\nenter the car name:";
  cin>>carname;
  cout<<"\nenter release_year:";
  cin>>release_year;
  cout<<"\nenter price:";
  cin>>price;
 }
 void putdata()
 {
  cout<<"\nCar name="<<carname;
  cout<<"\nRelease year="<<release_year;
  cout<<"\price="<<price;
 }
};
class Maruti800 : public Maruti
{
 public:
 void details()
 {
  getdata();
  putdata();
 }
};
void main()
{
Car c;
Maruti m;
Maruti800 m1;
clrscr();
m1.details();
getch();
}











