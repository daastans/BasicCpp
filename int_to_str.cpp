#include<iostream>
#include<cstring>
#include<string>

class string
{
private:
    char str[20];
public:
    string()
    {
        std::cout<<"Default constructor is called for "<<this<<std::endl;
        str[0]='\0';
    }
    string(char *s)
    {
        std::cout<<"String constructor is invoked for "<<this<<std::endl;
        strcpy(str,s);
    }
    string(int a)
    {
        std::cout<<"Int constructor is invoked for "<<this<<std::endl;
        int x=snprintf(str,strlen(str)+2,"%d",a);//You can search fromat of this function on google.
        std::cout<<"Num of character written is  "<<x<<std::endl;
    }
    operator int()
    {
        std::cout<<"Conversion operator is called str length is "<<strlen(str)<<std::endl;
        int ss=0,ll=0,k=1;

        for(int i=strlen(str)-1;i>=0;i--)
        {
            std::cout<<(str[i]-48);
            ss+=(str[i]-48)*k;
            k*=10;
        }
        return ss;
    }
    void displaydata()
    {
        std::cout<<str<<std::endl;
    }
};

int main()
{
    string s=200;s.displaydata();//copy constructor is called
    string q(55);q.displaydata();//copy ctor is called

    string r("11");//constructor is called
    r.displaydata();
    r=q;r.displaydata();//since q is string string constructor is called

    int c=int(q);//Conversion operator is called
    std::cout<<"Integer c is :"<<c<<std::endl;

    return 0;

}
