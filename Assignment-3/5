#include<iostream>
using namespace std;
class parking{
public:

    float calculate_charges(float hour)
{
    if(hour>0&&hour<=3.0){
        return 2.0;
    }
    else if(hour>3.0&&hour<=24.0){
        float charges;
        charges=((hour-3.0)*0.5)+2.0;
        if(charges>10.0)
            return 10.0;
        else
            return charges;
    }
    else
        return ((hour-24.0)*0.5)+10.0;


}
};
int main()
{   float charge1,charge2,charge3;
    parking car1,car2,car3;
    charge1=car1.calculate_charges(2.0);
    charge2=car2.calculate_charges(4.0);
    charge3=car3.calculate_charges(24.0);
    cout<<"Car"<<"       "<<"Hours"<<"       "<<"Charges"<<endl;
    cout<<"1"<<"         "<<"2.0"<<"         "<<charge1<<endl;
    cout<<"2"<<"         "<<"4.0"<<"         "<<charge2<<endl;
    cout<<"3"<<"         "<<"24.0"<<"        "<<charge3<<endl;
    cout<<"Total"<<"     "<<"28.0"<<"        "<<charge1+charge2+charge3<<endl;
}
