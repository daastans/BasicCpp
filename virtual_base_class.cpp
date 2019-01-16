/*In this program derived1 and derived2 share single subobject/function and not two different versions of it
which solves the ambiguity of calling proper function from derived3 This has been implemented through virtual keyword*/
#include<iostream>

class base
{
public:
    void func(){std::cout<<"I am in base"<<std::endl;}
};
class derived1:virtual public base {};//Try removng virtual keyword and read error
class derived2:virtual public base {};
class derived3:public derived1,public derived2
{
    //void display() {base::func();}
};
int main()
{
        base* b;
        b=new derived3;
        b->func();
        //b->display();//YOu cannot make following call wonder why? well display should be in base as virtual
        return 0;
}
