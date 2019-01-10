#include<iostream>

class sample
{
    int a;
public:
    sample() {std::cout<<"Constructor called\n";}
    ~sample(){std::cout<<"Destructor called\n";}

};
int main()
{
    sample* temp;
    sample* temparray=new sample[10]; // Allocating array through new
    temp=new sample;//Allocating object
    delete temp;//Deleting object
    delete []temparray;//Deleting array
    return 0;
}
/* we can see that new not only allocates memory but istantiates object too (constructing)
Similiary delete not only deallocates storage but destroys object too and this is how these both differ from malloc and dealloc*/
