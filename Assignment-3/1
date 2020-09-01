#include<iostream>
using namespace std;
class complex{
private:
    int real=0,img=0;
    friend istream &operator>>(istream &,complex &);
    friend ostream &operator<<(ostream &,complex &);
};
istream &operator>>(istream &in,complex &d){
in>>d.real>>d.img;
return in;

}
ostream &operator<<(ostream &out,complex &d)
{
    out<<d.real<<"+"<<d.img<<"i"<<endl;
    return out;
}
int main()
{complex c1;
cout<<"enter real and imaginary part"<<endl;
cin>>c1;
cout<<"result"<<endl;
cout<<c1;

}
