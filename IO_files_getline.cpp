#include<fstream>
#include<iostream>

int main()
{
    std::ofstream outfile("Sample.txt");
    outfile<<2345<<std::endl<<"This is paasordfs"<<std::endl<<"Rock and roll"<<std::endl;
    outfile.close();

    std::string str;

    std::ifstream infile("Sample.txt");
    while(!infile.eof())
    {
        getline(infile,str);
        std::cout<<str<<std::endl;
    }
    return 0;
}
