#include<iostream>

class shape
{
public:
    virtual void display()=0; //Pure virtual function
};
class Square:public shape
{
public:
    void display(){std::cout<<"This is square"<<std::endl;}
};
class Line:public shape
{
public:
    void display(){std::cout<<"This is Line"<<std::endl;}
};
class Triangle:public shape
{
public:
    void display(){std::cout<<"This is Triangle"<<std::endl;}
};

int main()
{
    shape *shapee;Triangle t;Square s;Line l;
    shapee=&l;shapee->display();
    shapee=&t;shapee->display();
    shapee=&s;shapee->display();
    return 0;
}
/* Pure virutal function has not bod and is euated to 0 in declaration , it is
used when we hare sure never to call it .
These are used in abstract classes. Abstract classes are classes from which we never create a object.*/
