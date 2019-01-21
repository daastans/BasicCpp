#include<iostream>

class roman
{
public:
     unsigned long num;

     roman(unsigned long n)
     {
         num=n;
     }
     friend std::ostream& operator<<(std::ostream&,roman&);
};
std::ostream& operator<<(std::ostream& out,roman&& r)
{
    struct table
    {
        char ch;
        int val;
    };
    struct table z[]=
    {
        'M',1000,
        'D',500,
        'C',100,
        'L',50,
        'X',10,
        'V',5,
        'I',1

    };
    int sz;
    int k;
    sz=sizeof(z)/sizeof(z[0]);

    for(int i=0;i<sz;i++)
    {
        k=r.num/z[i].val;
        for(int j=1;j<=k;j++)
        {
            out<<z[i].ch;

            r.num=r.num%z[i].val;
        }
    }
    return out;
}

int main()
{
    int i=140;
    std::cout<<roman(i)<<std::endl;
    return 0;
}
