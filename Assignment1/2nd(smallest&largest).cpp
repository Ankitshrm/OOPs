#include<iostream>
using namespace std;
int main()
{

    int a[50],i,j,temp,n;
    cout<<"Enter limit";
    cin>>n;
    cout<<"Enter the values ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    for(j=i+1;j<n;j++)
    {

        if(a[j]<a[i])
        {

            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
cout<<"The second smallest value is"<<a[1]<<endl;
cout<<"The second largest value is"<<a[n-2]<<endl;
}
