/* When operator new is unable to allocate memory it returns NULL
Actually there is one internal pointer called _new_handler which initally contains NULL
when new fails to allocate memory it calls this pointer , but you can make this pointer point to
some function by usins set_new_handler() functon as given below*/

#include<iostream>
void memwarning()
{
    std::cout<<"Free store has exhausted\n";
    exit(1);
}
int  main()
{
    std::set_new_handler(memwarning);//Setting _new_handler pointer
    char *p,*q;
    p=new char[100];
    std::cout<<"First allocation = "<<std::hex<<long(p)<<" \n";
    q=new char[6666664000000u];
    std::set_new_handler(0); //Returning Handler to default to avoid circumstances in future
    return 0;
}
