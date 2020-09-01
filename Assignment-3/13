#include<iostream>
using namespace std;
int recursiveMinimum(int a[],int n)
{int min=0;
    if(n==1)
        return a[0];

else
{
    min=recursiveMinimum(a,n-1);
    if(min<a[n-1])
        return min;
    else
        return a[n-1];
}

}
int main()
{
    int a[20],n,i;
    cout<<"enter limit of array"<<endl;
    cin>>n;
    cout<<"enter array"<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<"minimum is : "<<recursiveMinimum(a,n)<<endl;
}
