#include<iostream>
using namespace std;

class Students{
protected:
    string Name;
    int Roll_no;
public:
    string getName(){
        return Name;
        }
    int getRoll_no(){
        return Roll_no;
    }
};

class UndergraduateStudents:public Students{
protected:
    int year;
public:
    int getYear(){
        return year;
    }
};

class GraduateStudents:public Students{
protected:
    int Research_paper;
    string Bachelor_degree;
public:

     string getBachelor_degree(){
    return Bachelor_degree;
    }

     int getResearch_paper(){
    return Research_paper;
    }


};
class Freshman:public UndergraduateStudents{
public:
    Freshman(string n,int r,int y)
    {
        Name=n;
        Roll_no=r;
        year=y;
    }
};
class Junior:public UndergraduateStudents{
public:
    Junior(string n,int r,int y)
    {
        Name=n;
        Roll_no=r;
        year=y;
    }

};
class Senior:public UndergraduateStudents{
public:
    Senior(string n,int r,int y)
    {
        Name=n;
        Roll_no=r;
        year=y;
    }

};

class DoctrolStudents:public GraduateStudents{
public:
    DoctrolStudents(string n,int r,int p,string x)
    {
        Name=n;
        Roll_no=r;
        Research_paper=p;
        Bachelor_degree=x;

    }

};

class MasterStudents:public GraduateStudents{
public:
    MasterStudents(string n,int r,string x){
    Name=n;
    Roll_no=r;
    Bachelor_degree=x;
    }
};
int main()
{
    Freshman f("mayank",201657,1);
    Junior j("Ankit",204566,2);
    Senior s("Aman",2014555,4);
    MasterStudents m("Harsh",56788,"Btech");
    DoctrolStudents d("manik",78930,4,"Bsc");
    cout<<"Undergraduate Freshman"<<endl;
    cout<<"Name = "<<f.getName()<<"\t"<<"Roll_no = "<<f.getRoll_no()<<"\t"<<"year = "<<f.getYear()<<endl;
    cout<<endl;
    cout<<"Undergraduate Junior"<<endl;
    cout<<"Name = "<<j.getName()<<"\t"<<"Roll_no = "<<j.getRoll_no()<<"\t"<<"year = "<<j.getYear()<<endl;
    cout<<endl;
    cout<<"Undergraduate Senior"<<endl;
    cout<<"Name = "<<s.getName()<<"\t"<<"Roll_no = "<<s.getRoll_no()<<"\t"<<"year = "<<s.getYear()<<endl;
    cout<<endl;
    cout<<"Graduate Masteral"<<endl;
    cout<<"Name = "<<m.getName()<<"\t"<<"Roll_no = "<<m.getRoll_no()<<"\t\t"<<"Bachelor Degree = "<<m.getBachelor_degree()<<endl;
    cout<<endl;
    cout<<"Graduate Doctrol"<<endl;
    cout<<"Name = "<<d.getName()<<"\t"<<"Roll_no = "<<d.getRoll_no()<<endl;
    cout<<"Research papers = "<<d.getResearch_paper()<<"\t"<<"Bachelors Degree = "<<d.getBachelor_degree()<<endl;






}


