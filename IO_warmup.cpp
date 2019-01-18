/*This program implements stdio File to a class*/

#include<stdio.h>
#include<iostream>
#include<stdlib.h>

class File
{
private:
    FILE *fp;
public:
    File(const char* name,const char* mode)
    {
        fp=fopen(name,mode);
        if(fp==NULL)
        {
            std::cout<<"Couldn't open the file"<<std::endl;
            exit(1);
        }
    }
    ~File()
    {
        fclose(fp);
    }
    FILE* getFilePointer()
    {
        return fp;
    }
    void read()
    {
        char ch;
        while((ch=fgetc(fp))!=EOF)
        {
            std::cout<<ch;
        }
    }
};
int main()
{
    File f("demp.txt","r");
    f.read();

    return 0;
}
