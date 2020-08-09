#include<iostream>
using namespace std;
class Date {
private:
int day,month,year;
public:
Date(int day=1,int month=1,int year=1950){
this->day=day;
this->month=month;
this->year=year;
}
void setday(int day)
{
if(day>=1&&day<=31)
{
this->day=day;
}
else{
cout<<"WRONG DAY INPUT!"<<endl;
}
}
void setmonth(int month){
if(month>=1&&month<=12){
this->month=month;
}
else{
cout<<"WRONG MONTH INPUT!";
}
}
void setyear(int year){
this->year=year;
}
int getday()
{
return day;
}
int getmonth()
{
return month;
}
int geyear()
{
return year;
}
void displaydate()
{
cout<<"DATE IS :"<<day<<"/"<<month<<"/"<<year<<endl;
}
};
int main()
{
Date A;
int year,month,day;
cout<<"ENTER DAY:"<<endl;
cin>>day;
cout<<"ENTER MONTH:"<<endl;
cin>>month;
cout<<"ENTER YEAR:"<<endl;
cin>>year;
A.setday(day);
A.setmonth(month);
A.setyear(year);
A.displaydate();
return 0;
}

