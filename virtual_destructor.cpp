/* Naturally the flow of destructor is from most derived class to base derived but if
you create a base class pointer and allocate it obect through dnew then while deleting the pointer naturally the base class destructior will be called which can lead
to undetermined results to avoid this condition we use virtual destructors */
#include<iostream>

class base
{
public:
    base(){std::cout<<"In Base constructor\n";}
    virtual ~base(){std::cout<<"in Base destructor \n";}//Remove virtual and see difference
};
class derived:public base
{
public:
    derived(){std::cout<<"In derived constructor\n";}
    ~derived(){std::cout<<"in derived destructor \n";}
};

int main()
{
    base *b=new derived();
    delete b;
    return 0;
}
