#include<iostream>

class counter
{
private:
    int count;
public:
    counter() {count=0;}
    counter(int i){count=i;}
    void operator++() {count++;}//overloaded to just increase count value
    //counter operator++() {return counter(++count);}//This definition doesnt work
    std::ostream& operator<<(std::ostream &out)
    {
        out<<" count : "<<count<<"\n";
        return out;
    }
};
int main()
{
    counter c;
    c<<std::cout;
    counter d(10);
    d<<std::cout;//since we have overloaded << as member function we have to call it in opposite way..
    //d=c;
    d<<std::cout;
}
