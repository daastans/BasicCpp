/* Note it is dangerous to use virtual function inside ctor*/
#include<iostream>

class sample
{
protected:
    int i;
public:
    sample(){setData();}
    virtual void setData(){i=10;}
    void displayData(){std::cout<<i<<std::endl;}
};
class derived:public sample
{
public:
    derived():sample()
    {

    }
    void setData(){i=20;}
    void displayData(){std::cout<<i<<std::endl;}
};
int main()
{

    derived d;
    d.displayData();//calls only function of base
    return 0;
}
/*In line 27 alhough setData was declared virtual during creation of object d value of i didnt  change
to 20 which tells that that all to derived::setData was not made.
As we know base constructor is first to be called i.e, derived object is partially formed
hence we cannot call function in derived object*/
