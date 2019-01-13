#include<iostream>
class Base
{
public:
    virtual void display() {  std::cout<<"In Base::display\n";   }
};
class Derived:public Base
{
public:
    void display(){std::cout<<"In Derived::display\n";}
    void fun(){std::cout<<"Just kidding \n";}
};

int main()
{
    Base* b;Derived d;Base bobj;
    b=&bobj;b->display();
    b=&d;
    b->display();
    //b->fun();//This is illegal since Base has no function fun()
    return 0;
}
/*
Base VTABLE contains &Base::display
Derived VTABLE contains &Derived::display
                        &Derived::func
Moral is compiler prevents you from making calls to function that exists only in Derived*/
