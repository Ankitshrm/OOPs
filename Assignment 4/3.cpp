#include<iostream>
#include<cmath>
using namespace std;
class Quadrilateral{
protected:
    double Area;
    int perimeter;
    int x1,x2,x3,x4;
public:
    double getArea()
    {
        return Area;
    }
    int getPerimeter()
    {
        return perimeter;
    }

};
class Trapezoid:public Quadrilateral{
protected:
    int h;
public:
    Trapezoid(int side1,int side2,int side3,int side4,int height)
    {
        x1=side1;
        x2=side2;
        x3=side3;
        x4=side4;
        h=height;
        Area=1.0/2.0*(x1+x2)*h;
        perimeter=x1+x2+x3+x4;
    }
};
class Parallelogram:public Quadrilateral{
public:
    Parallelogram(int base,int height)
    {
        int x1=base;
        int x2=height;
       Area=x1*x2;
       perimeter=2*(x1+x2);
    }
};
class Rectangle:public Quadrilateral{
public:
    Rectangle(int length,int breadth)
    {
        x1=length;
        x2=breadth;
        Area=x1*x2;
        perimeter=2*(x1+x2);
    }
};
class square:public Quadrilateral{
public:
    square(int side)
    {
        x1=side;
        Area=pow(x1,2);
        perimeter=4*x1;
    }

};
int main()
{
    Trapezoid t(5,6,7,3,9);
    Rectangle r(7,8);
    Parallelogram p(6,7);
    square s(5);
    cout<<"Area and perimeter of Trapezoid is: "<<t.getArea()<<" and "<<t.getPerimeter()<<endl;
    cout<<"Area and perimeter of Parallelogram is: "<<p.getArea()<<" and "<<p.getPerimeter()<<endl;
    cout<<"Area and perimeter of Rectangle is: "<<r.getArea()<<" and "<<r.getPerimeter()<<endl;
    cout<<"Area and perimeter of Square is: "<<s.getArea()<<" and "<<s.getPerimeter()<<endl;

return 0;

}


