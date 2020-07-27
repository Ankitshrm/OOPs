#include<iostream>
#include<string.h>
using namespace std;
int main()
{

    int i,l,count=0;
    char str[50];
    cout<<"Enter the string ";
    cin>>str;

    l=strlen(str);

    for(i=0;i<l;i++){
        if(str[i]!=str[l-i-1])
    {

        count = 1;
        break;
    }
    }
    if(count){
        cout<<str <<" is not a palindrome"<<endl;

    }else{
    cout<<str<<" is palindrome"<<endl;

    }
return 0;

}
