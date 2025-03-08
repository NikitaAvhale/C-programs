#include<iostream.h>
#include<conio.h>
class Date
{
int dd,mm,yyyy;
public:
Date(int d, int m, int y)
{
dd=d;
mm=m;
yyyy=y;
}
void display()
{
if(mm>12){
cout<<"invalid month";
}else{
cout<<"input:"<<dd<<"/"<<mm<<"/"<<yyyy<<endl;
}if(mm==1){
cout<<"output:"<<dd<<"/"<<"jan"<<"/"<<yyyy;
}else if(mm==2)
{
cout<<"output:"<<dd<<"/"<<"feb"<<"/"<<yyyy;
}else if(mm==3)
{
cout<<"output:"<<dd<<"/"<<"mar"<<"/"<<yyyy;
}else if(mm==4)
{
cout<<"output:"<<dd<<"/"<<"apr"<<"/"<<yyyy;
}else if(mm==5)
{
cout<<"output:"<<dd<<"/"<<"may"<<"/"<<yyyy;
}else if(mm==6)
{
cout<<"output:"<<dd<<"/"<<"jun"<<"/"<<yyyy;
}else if(mm==7)
{
cout<<"output:"<<dd<<"/"<<"july"<<"/"<<yyyy;
}else if(mm==8)
{
cout<<"output:"<<dd<<"/"<<"aug"<<"/"<<yyyy;
}else if(mm==9)
{
cout<<"output:"<<dd<<"/"<<"sep"<<"/"<<yyyy;
}else if(mm==10)
{
cout<<"output:"<<dd<<"/"<<"oct"<<"/"<<yyyy;
}else if(mm==11)
{
cout<<"output:"<<dd<<"/"<<"nov"<<"/"<<yyyy;
}else{
cout<<"output:"<<dd<<"/"<<"dec"<<"/"<<yyyy;
}
}
};
void main()
{
int d, m, y;
clrscr();
cout<<"enter a date:";
cin>>d;
cout<<"enter a month:";
cin>>m;
cout<<"enter a year:";
cin>>y;
Date d1(d, m, y);
d1.display();
getch();
}
