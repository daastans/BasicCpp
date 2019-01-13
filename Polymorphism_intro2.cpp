#include<iostream>

class one
{
public:
    virtual void  display()
    {
        std::cout<<"In Display of Base class"<<std::endl;
    }
};
class oneofone:public one
{
public:
    void display()
    {
        std::cout<<"In Display of oneofone class"<<std::endl;
    }
};
class twoofone:public one
{
public:
    void display()
    {
        std::cout<<"In Display of twoofone class"<<std::endl;
    }
};
int main()
{
    one* ptr;
    oneofone one1;
    twoofone two1;

    ptr=&one1;//This is called upcasting See note below
    ptr->display();
    ptr=&two1;
    ptr->display();
    return 0;
}
/* Here display of respective classes is called since
compiler selects the function on basis of contents of pointer and not on the type
If instead of pointers references would have been used result would have been the same
This actually is implemented through late binding or dynamic binding.*/
