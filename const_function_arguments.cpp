/* const functions are such function which connot modify data members*/
#include<iostream>

class demo
{
private:
    int data;
public:
    void changedata(int j){data=j;}
    void showdata() const
    {
        /*data++; this is illegal since const function cannot modify data members*/
        std::cout<<"Data : "<<data<<std::endl;
    }
    void add (demo const &,demo const &);
};
void demo::add(demo const &obj1,demo const &obj2)
{
    /*obj1.data=90; This is an invalid assignment due to const nature of argument*/
    data=obj1.data+obj2.data;
}
int main()
{
    demo a,b,c;
    b.changedata(60);c.changedata(40);
    a.showdata();
    a.changedata(12);    a.showdata();
    a.add(b,c);          a.showdata();
    return 0;
}
