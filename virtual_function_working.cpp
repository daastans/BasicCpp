#include<iostream>

class vehicle
{
public:
    virtual void speed() {std::cout<<"In speed of vehicle\n";}
    virtual void maintenance(){std::cout<<"In  maintenance of Vehhicle\n";}
    void value(){std::cout<<"In value of vehicle\n";}
};
class fourwheeler:public vehicle
{
public:
    void speed(){std::cout<<"In speed of fourwheeler\n";}
    void maintenance(){std::cout<<"In maintenance of foruwheeler\n ";}
};
class twowheeler:public vehicle
{
public:
    void speed(){std::cout<<"In speed of twowheeler\n";}
    void maintenance(){std::cout<<"In maintenance of twowheeler\n ";}
    void value(){std::cout<<"In value of twowheeler\n";}
};
class airborne:public vehicle
{
public:
    void speed(){std::cout<<"In speed of airborne\n";}
};

int main()
{
    vehicle *ptr;vehicle v;

    ptr=&v;
    ptr->speed();
    ptr->maintenance();
    ptr->value();

    fourwheeler maruti;
    ptr=&maruti;
    ptr->speed();
    ptr->maintenance();
    ptr->value();//since fourwheeler has no value() function ,Base value() is called due to vtable entry

    twowheeler bajaj;
    ptr=&bajaj;
    ptr->speed();
    ptr->maintenance();
    ptr->value();//Here value of base is called same phenemenon

    airborne mig21;
    ptr=&mig21;
    ptr->speed();
    ptr->maintenance();//Same phenomenon


    return 0;
}
/* To accomplish late binding , the compiler creates a table called VTTABLE for each class
that contains virtual function and for classes derived from it .
The compiler places the address of the virtual function for that particular class in the VTABLE.
If you dont redefine a function that was declared virtual in the base class,
the compiler uses the address of the base-class version of function in the derived class VTABLE
When objects of the base class or derived class are created compliler secretly places a pointer called  VPTR which points to the
VTABLE when you make virtual function call through a base-class pointer the copiler quietly inserts code to fetch the vptr and look up the function address in
the VTABLE , thus calling the right fucntion causing late binding to takae place.

You maybe we wondering how compiler identifes vptr , usually all objects have vptr at same place
ehich is starting of object usually
*/
