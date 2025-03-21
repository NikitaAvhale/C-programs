#include<iostream.h>
#include<conio.h>
int main()
{
int num,i,j;
cout<<"enter total number of students:";
cin>>num;
float *ptr;
ptr=new float[num];
cout<<"enter GPA of numner:"<<endl;
for(i=0;i<num;i++)
{
cout<<"Student"<<i+1<<":";
cin>>*(ptr+i);
}
cout<<"\nDisplaying GPA of students."<<endl;
for(j=0;j<num;j++)
{
cout<<"Student"<<j+1<<":"<<*(ptr+j);
}
delete[]ptr;
getch();
return 0;
}
