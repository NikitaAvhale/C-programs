#include<iostream.h>
#include<conio.h>
class college
{
int dept_id;
char name;
int establish_year;
int no_of_faculty;
int no_of_student;
public:
void getdata()
{
	cout<<"enter dept_id\n";
	cin>>dept_id;
	cout<<"enter name\n";
	cin>>name;
	cout<<"enter establish year\n";
	cin>>establish_year;
	cout<<"enter no_of_faculty\n";
	cin>>no_of_faculty;
	cout<<"enter no. of student\n";
	cin>>no_of_student;
}
void putdata()
{
cout<<"department_id"<<dept_id<<"\n";
cout<<"department_Name"<<name<<"\n";
cout<<"establish_year"<<establish_year<<"\n";
cout<<"enter no of faculty"<<no_of_faculty<<"\n";
cout<<"enter no of student"<<no_of_student<<"\n";
}
};
void main()
{
 int n,i,j ;
 college c1[20];
 clrscr();
 cout<<"enter no. of departement";
 cin>>n;


 for(i=0;i<=n;i++)
 {
 c1[i].getdata();
 }
 cout<<"department details";
 for(j=0;j<n;j++)
 {
 c1[j].putdata();
 }

getch();
}
