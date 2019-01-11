/* const functions are such function which connot modify data members*/
#include<iostream>

class demo
{
private:
    int data;
public:
    demo():data(0){} // initialised data to 0
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
    const demo d;//this would not work without line number 9 ie. it requires data memeber to be initialised
    b.changedata(60);c.changedata(40);
    a.showdata();
    a.changedata(12);    a.showdata();
    a.add(b,c);          a.showdata();
    /*d.changedata(40); illegal since d is const object*/
    return 0;
}
