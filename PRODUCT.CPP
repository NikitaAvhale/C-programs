#include<iostream.h>
#include<conio.h>
class product
{
protected:
 int pro_id,i,n;
 char p_name[20];
 float prize;
 public:
 void getdata()
 {
 cout<<"enter the value of n:";
 cin>>n;
 for(i=0;i<n;i++)
 {
 cout<<"enter the project id:"<<endl;
 cin>>pro_id;
 cout<<"enter the project name:"<<endl;
 cin>>p_name;
 cout<<"enter the prize:"<<endl;
 cin>>prize;
}
}
void putdata()
{
for(i=0;i<n;i++)
{
cout<<"project id:"<<pro_id<<endl;
cout<<"project name:"<<p_name<<endl;
cout<<"project prize:"<<prize<<endl;
}
}
};
class discount :public product
{
protected:
float dis,amt , dis_amt;
public:
void accept()
{
getdata();
putdata();
cout<<"enter discount in percentage"<<endl;
cin>>dis;
}
void calculate()
{
dis_amt=prize*(dis/100);
cout<<"total discount:"<<dis_amt;
amt=prize-dis_amt;
cout<<"total amount after discount:"<<dis_amt<<endl;
}
};
void main()
{

discount d;
clrscr();

d.accept();
d.calculate();
getch();
}
