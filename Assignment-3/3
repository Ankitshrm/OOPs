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
friend int operator==(complex &,complex &);
friend int operator!=(complex &,complex &);

};
int operator==(complex &obj1,complex &obj2){
complex temp;
return (obj1.real==obj2.real&&obj1.img==obj2.img);
}
int operator!=(complex &a,complex &b)
{
return (a.real!=b.real||a.img!=b.real);
}
int main(){
complex c1(2,3);
complex c2(1,3);
if(c1==c2)
    cout<<"true";
else if(c1!=c2)
    cout<<"false";
}
