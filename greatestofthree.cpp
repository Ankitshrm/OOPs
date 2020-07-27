#include<iostream>
using namespace std;
int main()
{

    int num1,num2,num3,largest;
    cout<<"Enter the values";
    cin>>num1>>num2>>num3;
    largest=num1;
    if(largest<num2)
    {
        largest=num2;
    }
    if(largest<num3)
    {
        largest=3;
    }
    cout<<"Greatest number is "<<largest<<endl;
    return 0;

}
