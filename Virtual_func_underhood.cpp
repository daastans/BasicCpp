#include<iostream>

class sample
{
private:
    int i;
public:
    virtual void display()
    {std::cout<<"In sample class";}
};
class example
{
private:
    int i;
public:
    void display()
    {std::cout<<"In example class";}
};
class trail
{
public:
    void display()
    {std::cout<<"In Trial class";}
};
int main()
{
    sample s;example e;trail t;

    std::cout<<sizeof(s)<<std::endl
        <<sizeof(e)<<std::endl
        <<sizeof(t)<<std::endl;

        return 0;
}
/* Well as you can see although s and e contains same members they take different memory
and to our notice t takes 1 byte although it has no member.
Unusual size of e is due to virtual function in it , under the hood compiler inserts a pointer
called VPTR if you have one or more virtual functions.
Unusual size of t is due to the fact that to reference object it should take some space in memory
and smalles possible integer is 1 */
