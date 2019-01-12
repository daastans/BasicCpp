#include<iostream>

class rectangle
{
private:
    int l,b;
public:
    rectangle()
    {
        std::cout<<"constructor invoked for obj "<<this<<std::endl;
    }
    rectangle(int len,int bre)
    {
        l=len;
        b=bre;
        std::cout<<"constructor invoked for obj "<<this<<std::endl;
    }
    /*Note: parameter to copy ctor should be passed by reference otherwise to make
    copy of argument again copy ctor will be called leading to infinte loop*/
    rectangle(rectangle &rect)//copy constructor overloading
    {
        std::cout<<"copy constructor invoked for obj "<<this<<std::endl;
        l=rect.l;
        b=rect.b;
    }
    rectangle& operator=(rectangle& r)//assignment op overloading
    {
        std::cout<<"assignment constructor invoked for obj "<<this<<std::endl;
        l=r.l;
        b=r.b;
        //return rectangle(l,b);//This would giver error since rvalue-rectangle(l,b) cannot be binded to lvalue
        return *this; //lvalue is something which is in memory. we can only return lvalue hence this is done insetead of line 27
    }
    void print()
    {
        std::cout<<"Length : "<<l<<"\tBreadth : "<<b<<std::endl;
    }
};
int main()
{
    rectangle r;r.print(); // Normal constructor call
    rectangle s(2,2);s.print();
    r=s;r.print();//assignment+copy constructor call
    rectangle q=r;//copy constructor call
    rectangle t(r);t.print();//copy constructor call
    return 0;
}

/*An lvalue (locator value) represents an object that occupies some identifiable location in memory (i.e. has an address).
rvalue is an expression that does not represent an object occupying some identifiable location in memory.
It is to note here rvalue can exist in registers as temporaries but they dont exist in memory
All lvalues that aren't arrays, functions or of incomplete types can be converted thus to rvalues for sake of arithmetic.
But rvalue cannot be converted to lvalues.But we can produce lvalue from rvalues
for example using '*' dereferencing operator*/
