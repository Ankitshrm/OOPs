#include<iostream>
using namespace std;
class Invoice{
private:
    string name,d;
    int quantity,price,amount;
public:
Invoice(string,string,int,int);
void setpart_num(string);
string getpart_num();
void setpart_descr(string);
string getpart_descr();
void setquantity(int);
int getquantity();
void setprice(int);
int getprice();
int Invoiceamount();
};
