#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<string.h>
class mobile
{
int m_id;
char m_name[20];
float m_price;
public:
mobile(int id,const char name[20], float price)
{
m_id=id;
strcpy(m_name, name);
m_price=price;
}
void display()
{
cout<<setw(2)<<m_id<<endl;
cout<<setw(2)<<m_name<<endl;
cout<<setprecision(3)<<m_price;
}
};
void main()
{
mobile m1(1,"abc",2000.9884);
clrscr();
m1.display();
getch();
}
