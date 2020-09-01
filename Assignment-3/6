#include<iostream>
using namespace std;
class Invoice{
private:
    string name,d;
    int quantity,price,amount;
public:
Invoice(string name,string d,int quantity=0,int price=0){
setpart_num(name);
setpart_descr(d);
setprice(price);
setquantity(quantity);
}
void setpart_num(string name){
this->name=name;
}
string getpart_num(){
return name;
}
void setpart_descr(string d){
this->d=d;
}
string getpart_descr(){
return d;
}
void setquantity(int quantity){
this->quantity=quantity;
}
int getquantity(){
return quantity;
}
void setprice(int price){
this->price=price;
}
int getprice(){
return price;
}
int Invoiceamount()
{
    amount=price*quantity;
    return amount;
}

};
int main()
{
    Invoice v("GAS3C","Digital wall clock",2,75.5);
  cout<<"Item number:"<<"  "<<v.getpart_num()<<endl;
  cout<<"Item description :"<<"  "<<v.getpart_descr()<<endl;
  cout<<"Quantity :"<<"     "<<v.getquantity()<<endl;
  cout<<"Price per item :"<<"  "<<v.getprice()<<endl;
  cout<<"total amount :"<<"  "<<v.Invoiceamount()<<endl;
}
