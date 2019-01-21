/*Flags are used to format the data data stream Flags are of two types
one which work independentaly others which work in group(ON/OFF Flags)
To set flags we use setf() function which takes one pramameter i.e name of flags
for independent flags and two parameters name and category for group flags*/

#include<iostream>
#include<ios>

using namespace std;
int main()
{
    int i=52;
    float a=425.0;
    float b=132.522254566;
    char str[]="Dream .Then make it happen";

    std::cout.setf(ios::unitbuf);//Flushes all streams after each insertion
    //std::cout.setf(ios::stdio);

    std::cout.setf(ios::showpos);
    std::cout<<i<<std::endl;
    std::cout.setf(ios::showbase);//shows base 0 for octal 0x for hex
    std::cout.setf(ios::uppercase);
    std::cout.setf(ios::hex,ios::basefield);//hex is group flag under basefield ,simply setting hex on can be errosome so basefield is provide to clear all other falgs
    std::cout<<i<<std::endl;
    std::cout.fill('o');//useful with width method
    std::cout<<"Fill Character: "<<cout.fill()<<std::endl;

    std::cout.setf(ios::dec,ios::basefield);
    std::cout.width(10);//sets the minimum width of word/column
    std::cout<<i<<std::endl;

    std::cout.setf(ios::left,ios::adjustfield);//left justification
    std::cout.width(10);
    std::cout<<i<<std::endl;

    std::cout.setf(ios::internal,ios::adjustfield);
    std::cout.width(10);
    std::cout<<i<<std::endl;
    std::cout<<i<<std::endl;//without width since width is reset with eac insertion and extraction

    std::cout.width(10);
    std::cout<<str<<std::endl;

    std::cout.width(40);
    std::cout<<str<<std::endl;

    std::cout.setf(ios::left,ios::adjustfield);
    std::cout.width(40);
    std::cout<<str<<std::endl;

    std::cout.precision(6);
    std::cout<<"precision : "<<cout.precision()<<std::endl;
    std::cout.setf(ios::showpoint);//show foating point
    std::cout.unsetf(ios::showpos);//show positibe mark
    std::cout<<a<<std::endl;

    std::cout.unsetf(ios::showpoint);
    std::cout<<a<<std::endl;

    std::cout.setf(ios::fixed,ios::floatfield);
    std::cout<<b<<std::endl;

    std::cout.setf(ios::scientific,ios::floatfield);
    std::cout<<b<<std::endl;

    b=5.37;
    std::cout.precision(14);
    std::cout.setf(ios::fixed,ios::floatfield);
    std::cout<<b<<std::endl;

    std::cout.setf(ios::scientific,ios::floatfield);
    std::cout<<b<<std::endl;

    std::cout.unsetf(ios::showpoint);
    std::cout.unsetf(ios::unitbuf);


    return 0;
}
