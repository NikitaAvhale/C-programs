#include<iostream.h>
#include<conio.h>
inline area_of_circle(float r){
return 3.14*r*r;
}
inline area_of_square(int side){
return side * side;
}
inline area_of_rectangle(float l, float b){
return l*b;
}
void main(){
float r, l, b;
int side;
 clrscr();
cout<<"enter the radius"<<endl;
cin>>r;
cout<<"area of circle :"<<area_of_circle(r)<<endl;
cout<<"enter the side"<<endl;
cin>>side;
cout<<"area of square :"<<area_of_square(side)<<endl;
cout<<"enter l and b:"<<endl;
cin>>l>>b;
cout<<"area of rectangle:"<<area_of_rectangle(l,b)<<endl;

getch();
}