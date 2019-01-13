/**/
#include<iostream>

class one
{
public:
    void  display()
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
//upcasting is case where compiler relaxes type checking , the rule is that pointers of objects of derived classes are type-compatible with pointers of obects of base class.
/*Here the display of base class gets called since compiler binds display function to the type of pointer (i.e class one)
It ignores the content of pointer This is due to static binding. continued to part2 */
