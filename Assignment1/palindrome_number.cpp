#include<iostream>
using namespace std;
int main()
{

    int n,temp,s=0,k;
    cout<<"Enter the values";
    cin>>n;
    k=n;
    while(n>0)
    {

        temp=n%10;
        s=s*10+temp;
        n=n/10;

    }
    if(s==k)
    {

        cout<<"Entered number is palindrome"<<endl;

    }else{
    cout<<"Enter number is not a palindrome"<<endl;
    }

    return 0;
}
