#include<fstream>
#include<iostream>

int main()
{
        std::string src;
        std::string dest;


        std::cout<<"Enter source FileName \n";
        getline(std::cin,src);
        std::cout <<"Enter destination filename" << "\n";
        getline(std::cin,dest);

        std::ifstream in(src);std::ofstream out(dest);

        while(in) //ios::operator void*() called  it returns 0 or pointer
        {
                getline(in,src);
                out<<src<<std::endl;
                std::cout<<"Wrote LIne : "<<src<<std::endl;
        }
        return 0;
}
