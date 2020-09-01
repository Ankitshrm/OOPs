#include<iostream>
#include<string.h>
using namespace std;
bool testpalindrome(char str[],int i,int l)
{    if(l==i)
        return true;
     if(str[i]!=str[l])
        return false;
    else if(i<l+1)
        return(testpalindrome(str,i+1,l-1));
    return true;
cout<<str;

}
int main()
{char str[30];
int i=0,l;
   cout<<"enter a string"<<endl;
   cin>>str;
   l=strlen(str);
    if(testpalindrome(str,i,l-1))
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;
}
