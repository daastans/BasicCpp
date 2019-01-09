//Operator overloading means giving new meaning to C++ Operators.
//New operators cannot be defined
//Precedence of operators cannot be changed.


#include<bits/stdc++.h>
using namespace std;

class ccomplex
{
public:
    int real;
    int imaginary;
    ccomplex(int r,int i)
    {
        real=r;imaginary=i;
    }
    friend ccomplex operator+(ccomplex &, ccomplex &);//Note i passed them as reference to save some space that would have been used to create copy of passed object.
    friend ccomplex operator-(ccomplex &,  ccomplex &);
    friend ostream &operator<<(ostream &,ccomplex);


};
ostream &operator<<(ostream &out,ccomplex e)//overloading << operator
{
    if(e.imaginary<0)
        out<<e.real<<" - "<<-1*e.imaginary<<"i"<<endl;
    else
        out<<e.real<<" + "<<e.imaginary<<"i"<<endl;
    return out;
}
ccomplex operator+(ccomplex &e1,ccomplex &e2)
{
        ccomplex e3(0,0);
        e3.real=e1.real+e2.real;
        e3.imaginary=e1.imaginary+e2.imaginary;

        return e3;
}
ccomplex operator-(ccomplex &e1,ccomplex &e2)
{
        ccomplex e3(0,0);
        e3.real=e1.real-e2.real;
        e3.imaginary=e1.imaginary-e2.imaginary;

        return e3;
}
int main()
{
    ccomplex a(2,3),b(9,7),c(0,0),d(0,0);
    c=a+b;
    cout<<c;
    d=a-b;
    cout<<d;
  return 0;
}
/*compiler sees
c=a + b
c=operator+(a, b)
*/
