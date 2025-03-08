#include<iostream.h>
#include<conio.h>
class rectangle2;
class rectangle1
	{
	int l, b,a;
	public:

	void getdata()
	{
	cout<<"enter the l and b :"<<endl;
	cin>>l>>b;
	}

	void putdata()
	{
	a=l*b;
	cout<<"area of rectangle:"<<a<<endl;
	}

	friend void comapare(rectangle1 r1, rectangle2 r2);
};

	class rectangle2
	{
	int l, b,a2;
	public:

	void getdata()
	{
	cout<<"enter the l and b:"<<endl;
	cin>>l>>b;
	}

	void putdata()
	{
	a2=l*b;
	cout<<"area of Rectangle is:"<<a2<<endl;
	}

	friend void comapare(rectangle1 r1, rectangle2 r2);
};

void comapare(rectangle1 r1, rectangle2 r2)
	{
      int g=r1.a;
      int h=r2.a2;

	if(g>h)
	{
	cout<<"rectangle1 is greater"<<endl;
	}
	else if(g<h)
	{
	cout<<"rectangle2 is greater"<<endl;
	}
	else{
	cout<<"both have same area"<<endl;
		}
}

int main()
{
rectangle1 r1;
rectangle2 r2;
clrscr();
r1.getdata();
r1.putdata();
r2.getdata();
r2.putdata();
comapare(r1,r2);
getch();
return 0;
}