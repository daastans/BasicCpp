/* writing streams normally take up much of space since they are written as
alpha numeric strings a better way to do it is wirte then in binary formar*/

#include<iostream>
#include<fstream>
#include<ios>

int main()
{
    struct employee
    {
        std::string name;
        int age;
        float basic;
        float gross;
    };

    employee e;
    char ch='Y';
    std::ofstream out;
    out.open("employee.dat",std::ios::binary);

    while(ch=='y' || ch=='Y')
    {
        std::cout<<"Enter name,age,basic,gross\n";
        std::cin>>e.name>>e.age>>e.basic>>e.gross;
        out.write((char*)&e,sizeof(e));//since write have no knowladge about e we typecast it
        std::cout<<"Want to write another record Y/y\n";
        std::cin>>ch;
    }
    out.close();

    std::ifstream in;
    in.open("employee.dat",std::ios::binary);

    while(in.read((char*)&e,sizeof(e)))
    {
        std::cout<<e.name<<" "<<e.age<<" "<<e.basic<<" "<<e.gross<<std::endl;
    }

    return 0;
}
