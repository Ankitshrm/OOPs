#include<iostream>
using namespace std;
class complex{
private:
    int real,img;
public:
complex(int real=0,int img=0){
    this->real=real;
    this->img=img;
}
friend complex operator*(complex &,complex &);
void print(){
cout<<real<<"+"<<img<<"i"<<endl;

}

};
complex operator*(complex &obj1,complex &obj2){
complex temp;
temp.real=obj1.real*obj2.real;
temp.img=obj1.img*obj2.img;
return temp;

}
int main(){
complex c1(2,3);
complex c2(4,5);
complex c3=c1*c2;
c3.print();
}
