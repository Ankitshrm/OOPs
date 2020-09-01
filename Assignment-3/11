#include<iostream>
using namespace std;
void printarray(int a[],int n,int i)
{if(i==n)
    return ;
else
{
    cout<<a[i];
    printarray(a,n,i+1);
}

}
int main()
{
    int a[20],n,i;
    cout<<"enter limits of array"<<endl;
    cin>>n;
    cout<<"enter array"<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    printarray(a,n,0);
}
