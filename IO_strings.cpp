#include<iostream>

int main()
{
    char str[]="Justice is coming";
    char *ptr=str;

    std::cout<<ptr<<"\n"<<(void *)ptr<<std::endl;//to print string address you need to cas it into void*
    return 0;
}
