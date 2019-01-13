/*Inheritance permits code reuability Here  index1 inhrits all the features of the base calss index
and doesnt need constructor function or operator--() which is already present in base class*/
#include<iostream>

class index
{
protected:
    int count;
public:
    index()
    {
        std::cout<<"Base constructtor called"<<std::endl;
        count=0;
    }
    index(int c)
    {
        count=c;
    }
    void display()
    {
        std::cout<<"Count :"<<count<<std::endl;
    }
    void operator++()//Prefix operator overload
    {
        ++count;
    }
};
class index1:public index
{
public:
    using index::index;//This line will make line 39 work since it allows us to inherit base constructor otherwise we can only used default constructor  
    void operator--()
    {
        count--;
    }
};
int main()
{
    index1 in(2);
    ++in;
    ++in;
    in.display();
    --in;
    in.display();
    return 0;
}
