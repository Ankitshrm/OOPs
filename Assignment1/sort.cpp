#include<iostream>
using namespace std;
int main()
{

    int a[50],n,i,j,temp;
    cout<<"Enter the limit";
    cin>>n;
    cout<<"Enter the values";
    for(i=0;i<n;i++)
    {

    cin>>a[i];
    }
    for(i=1;i<n;i++)
    {

        temp=a[i];
        j=i-1;
        while(j>=0&&temp<=a[j])
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }
    cout<<"sorted array = ";
    for(i=0;i<n;i++)
    {

        cout<<a[i]<<"\n";

    }
    return 0;
}
