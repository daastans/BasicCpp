/*Static variables are allocated storage only once
and are shared by all objects and exist as long as program exists , much like member functions
they have different syntax as compared to another vairables ,they are declared inside class
and defined outside class This unusual syntax is due to definition of class as a blueprint
since defining variable mean allocating storage and class shouldnt define variable only should declare*/
#include<iostream>

class Objects
{
private:
    static int count;
    int value;
public:
    Objects() {std::cout<<"Create object number "<<++count<<" with value "<<value<<std::endl;}

};
int Objects::count=0;
int main()
{
    Objects a,b,c;
}
