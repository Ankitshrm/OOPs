#include<iostream>
using namespace std;
int main()
{

    int n,c=0,i;
    cout<<"enter the value";
    cin>>n;
    for(i=2;i<=n/2;i++)
    {

        if(n%i==0)
        {
            c=c+1;

        }
    }
    if(c>0)
    {

        cout<<"Number is not prime"<<endl;

    }
    else{
        cout<<"Number is prime"<<endl;

    }
    return 0;
}
