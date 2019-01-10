/* satic fnctions are similiar to static variables the only way they differ with
member functions is the way in which they are called*/
#include<iostream>
class objects
{
private:
    static int count;
public:
    objects()
    {
        count++;
    }
    static void showdata()
    {
        std::cout<<"NO of objects : "<<count<<std::endl;
    }
};
int objects::count=0;

int main()
{
    objects a,b;
    a.showdata();//clumsy way to call showdata
    objects c,d;
    objects::showdata();//Elegant way to call showdata

    return 0;
}
