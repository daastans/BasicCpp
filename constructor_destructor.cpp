#include<bits/stdc++.h>
using namespace std;
class integer
{
private:
    int a,b,c;
public:
    integer(int);//overloaded constructor
    integer(int,int);
    integer(int,int,int);
    integer(); //This is not default constructor as you may think it is called defined constructor
    ~integer();//Destructor
};
integer::integer(int j)
{
    a=j;b=0;c=0;
    cout<<this<<" Object "<<a<<b<<c<<" got created\n";
}
integer:: integer(int j,int k)
{
    a=j;b=k;c=0;
    cout<<this<<" Object "<<a<<b<<c<<" got created\n";
}
integer::integer(int j,int k,int l)
{
    a=j;b=k;c=l;
    cout<<this<<" Object "<<a<<b<<c<<" got created\n";
}
integer::integer()
{
    a=0;b=0;c=0;
    cout<<this<<" Object "<<a<<b<<c<<" got created\n";
}
integer::~integer()
{
    cout<<this<<" Object "<<a<<b<<c<<" got destroyed\n";
}
int main()
{
    integer aa();//Compler thinks this is an empty function declaration here it isnt a constructor call nothing would happen
    integer aa;//This is actually constructor call with NO argument
    integer bb(7);
    integer cc(6,7);

    integer dd(7,8,9);
    cc.~integer();//You should not call Destructor explicitly use artifical block instead

  return 0;
}
/*NOte is there is no constructor there is Implicit constructor that is calld by compiler
 but once you define your own constructor then that constructor is always called during object istantiation
 and Implicit constructor is disowned to call this again you need to define it again in the code*/

// You can see that Destructor works in reverse order
//Also if you explicitly call Destructor it would be called again
