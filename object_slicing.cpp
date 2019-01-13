#include<iostream>

class Base
{
private:
    int i;
public:
    Base(int ii) {i=ii;}
    virtual void display() {std::cout<<i<<std::endl;}
};
class Derived:public Base
{
private:
    int i,j;
public:
    Derived(int ii,int p,int q):Base(ii)
    {
        i=p;j=q;
    }
    void display()
    {
        Base::display();
        std::cout<<i<<" "<<j<<std::endl;
    }
};
int main()
{
    Base b(10);Derived d(11,22,33);
    Base* ptr1=&b;ptr1->display();
    Base* ptr2=&d;ptr2->display();

    Base &ref1=b;ref1.display();
    Base &ref2=d;ref2.display();

    b=d;//Object Slicing
    b.display();

    return 0;
}
/* Object Slicing occurs when we use object as recipent of upcast rather than pointer/reference
the object is sliced until what is remained is subobject that corresponds to recipent
i.e, it only copies base portion from Derived object
One way to prevent slicing is to use Pure virtual functions */
