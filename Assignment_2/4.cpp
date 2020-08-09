#include<iostream>
using namespace std;
class Rectangle{
private:
float length,width;
public:
Rectangle(int length=1.0,int width=1.0)
{
this->length=length;
this->width=width;
}
void setlength(float x)
{
if(x>=0&&x<=200.0){
this->length=x;
}
else{
cout<<"Invalid Length Input! Please input less than 20.0"<<endl;
}
}
void setwidth(float y)
{
if(y>=0&&y<=200.0)
{
this->width=y;
}
else{
cout<<"Invalid Width Input! Please input less than 20.0"<<endl;
}
}
float area()
{
float Area=length*width;
return Area;
}
float perimeter()
{
float Perimeter=2*(length+width);
return Perimeter;
}
float getlength()
{
return length;
}
float getwidth()
{
return width;
}
};
int main()
{
float length,width,area,perimeter;
Rectangle A;
cout<<"Enter length! ";
cin>>length;
cout<<"Enter width ";
cin>>width;
A.setlength(length);
A.setwidth(width);
area=A.area();
perimeter=A.perimeter();
cout<<"AREA is :"<<area<<endl;
cout<<"PERIMETER is :"<<perimeter<<endl;
return 0;
}
