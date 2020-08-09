#include<iostream>
using namespace std;
int main()
{
	int i,j,n,k;
	cout<<"enter limit\n";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)

			cout<<" ";
		{

		for(k=1;k<=i*2-1;k++)
			cout<<"*";
		}
	 cout<<"\n";
	}

for(i=n;i<n*3;i++)
{for(j=1;j<=n+1;j++)

{
	if(j==n+1)
	cout<<"*";
	else
	cout<<" ";
}
cout<<"\n";

}
return 0;
}

