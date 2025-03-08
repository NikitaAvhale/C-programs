#include<iostream.h>
#include<conio.h>
class employee
{
int emp_id;
char name[20];
char designation[20];
char department[20];
int salary;
public:

void getdata()
{
cout<<"enter emp_id"<<endl;
cin>>emp_id;
cout<<"enter name"<<endl;
cin>>name;
cout<<"enter designation"<<endl;
cin>>designation;
cout<<"enter department"<<endl;
cin>>department;
cout<<"enter salary"<<endl;
cin>>salary;
}
void putdata()
{
cout<<"emp_id"<<emp_id<<"\n";
cout<<"Name"<<name<<"\n";
cout<<"designation"<<designation<<"\n";
cout<<"department"<<department<<"\n";
cout<<"salary"<<salary<<"\n";
}
};
void main()
{
clrscr();
employee s1;
s1.getdata();
s1.putdata();

getch();
}