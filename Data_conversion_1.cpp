
/*In this case conversion routine is present in source object*/
#include<iostream>
#include<string>

class dates
{
private:
    std::string dstr;
public:
    dates()
    {
        dstr="";
    }
    dates(std::string s)
    {
        dstr=s;
    }
    void displaydata()
    {
        std::cout<<dstr<<std::endl;
    }
};
class datei
{
private:
    int dd,mm,yy;
public:
    datei()
    {
        dd=mm=yy=0;
    }
    datei(int d,int m,int y)
    {
        dd=d;
        mm=m;
        yy=y;
    }
    operator dates()//Conversion/casting operator
    {
        std::string dates;
        dates=std::to_string(dd)+"\\"+std::to_string(mm)+"\\"+std::to_string(yy);
        return dates;
    }
    void displaydata()
    {
        std::cout<<dd<<"\\"<<mm<<"\\"<<yy<<std::endl;
    }
};
int main()
{
    dates ds;
    datei di(11,8,1997);
    di.displaydata();
    ds=di;//First it tries to find overload assignment operator otherwise Conversion operator
    ds.displaydata();
    return 0;
}
