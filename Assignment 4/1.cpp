/*
Inheritance allows developers to create subclasses/child Class that reuse code declared already in
a superclass. Avoiding the duplication of common functionality between several
classes by building a class inheritance hierarchy can save developers a considerable
amount of time. Similarly, placing common functionality in a single superclass,
rather than duplicating the code in multiple unrelated classes,
helps prevent the same errors from appearing in multiple source-code files.
If errors occur in the common functionality of the superclass/Parent Class,
the software developer needs to modify only the superclass/Parent Class.


*/
/*for example We have a code over here in which A vehicle Class is the Parent Class and It has its child Classes */
#include <iostream>
using namespace std;
class Vehicle
{ /* Parent class vehicle*/

public:
    Vehicle()
    {
        cout << "\nThis is the Parent Class.(Default constructor) " << endl;
    }
};
class Twowheeler : public Vehicle
{ /*TwoWheeler Class inherited by Vehicle Class */
private:
    int x;

public:
    Twowheeler()
    {
        cout << "\nThis is Two-wheeler Class derived from Vehicle Class" << endl;
    }
    Twowheeler(int x)
    {
        this->x = x;
    }
    int getX()
    {
        return x;
    }
};
class Fourwheeler : public Vehicle
{ /*Four-wheeler Class Inherited By Vehicle CLass */
private:
    int x;

public:
    Fourwheeler()
    {
        cout << "\nThis is Four-wheeler Class derived from Vehicle class" << endl;
    }
    Fourwheeler(int x)
    {
        this->x = x;
    }
    int getX()
    {
        return x;
    }
};

class bike : public Twowheeler //Bike Class inherited By Two-wheeler Class
{
public:
    bike(int x) : Twowheeler(x)
    {
        cout << "this is Bike class derived from Two wheeler class" << endl;
    }
    void display()
    {
        cout << "number of tyres are " << getX() << endl;
    }
};
class Car : public Fourwheeler
{ //Car Class inherited b Four-wheeler Class
public:
    Car(int x) : Fourwheeler(4)
    {                                                                       /*we can reuse the parent classes again and again
                                                                            to reduce the chances of error while duplication */
        cout << "This is Car Class derived from Fourwheeler class" << endl;
    }
    void display()
    {
        cout << "number of tyres : " << getX() << endl;
    }
};
int main()
{
    Twowheeler T;
    Fourwheeler F;
    bike b(2);
    b.display();
    Car c(4);
    c.display();
    return 0;
}
