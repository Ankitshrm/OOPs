#include<iostream>
using namespace std;
class A{
public:
    A(int x){
    cout<<"Parametrized constructor of class A called "<<x<<endl;
    }
    A(){
    cout<<"Default constructor of class A called"<<endl;
    }
     ~A(){
    cout<<"Destructor of class A called"<<endl;
    }

};
class B:public A{
public:
    B(int x):A(x){
    cout<<"Parametrized constructor of class B called "<<x<<endl;
    }
    ~B(){
    cout<<"Destructor of class B called"<<endl;
    }


};
class C:public A{
public:
    C(){
    cout<<"Default constructor of class C called"<<endl;
    }
    ~C(){
    cout<<"Destructor of class C called"<<endl;
    }

};
class D:public C,public B{
public:
    D(int x):C(),B(x)
    {
    cout<<"Parametrized constructor of class D called "<<x<<endl;
    }
    ~D(){
    cout<<"Destructor of class D called"<<endl;
    }

};
int main()
{
   D d(10);

}


