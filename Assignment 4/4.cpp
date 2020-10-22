#include<iostream>
#include<cmath>
#define pi 3.14
using namespace std;
class Shape{
protected:
    int s;
};
class TwoDShape:public Shape{
protected:
    int Area;
public:
    int getArea()
    {
        return Area;
    }
    };
class ThreeDShape:public Shape{
protected:
    double Volume;
public:
    double getVolume()
    {
        return Volume;
    }
    };
class Square:public TwoDShape{
public:
    Square(int side=0)
    {
        s=side;
        Area=pow(s,2);
    }
    };
class rectangle:public TwoDShape{
protected:
    int l;
public:
    rectangle(int length,int breadth)
    {
        l=length;
        s=breadth;
        Area=l*s;
    }
    };
class sphere:public ThreeDShape{
public:
    sphere(int radius=0)
    {
        s=radius;
        Volume=4.0/3.0*(pi*pow(s,3));
    }
    };
class cone:public ThreeDShape{
protected:
    int h;
public:
    cone(int height,int radius)
    {
        h=height;
        s=radius;
        Volume=1.0/3.0*(pi*pow(s,2)*h);
    }

};
int main()
{
    rectangle r(7,3);
    Square sq(4);
    sphere sp(2);
    cone c(6,8);
   cout<<"Area of Rectangle"<<" = "<<r.getArea()<<endl;
   cout<<"Area of square"<<" = "<<sq.getArea()<<endl;
   cout<<"Volume of Sphere"<<" = "<<sp.getVolume()<<endl;
   cout<<"Volume of Cone"<<" = "<<c.getVolume()<<endl;
}


