#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter limit"<<endl;
    cin>>n;
    int a[n]={0};
    for(i=2;i<n;i++)
    {
        for(j=i*i;j<n;j+=i)
        {
            a[j-1]=1;
        }
    }
    cout<<"prime number upto "<<n<<" are :"<<endl;
    for(i=1;i<n;i++)
    {
        if(a[i-1]==0)
        {
            cout<<i<<endl;
        }
    }

}
