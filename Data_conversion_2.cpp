
/*In this case conversion routine is present in destination object*/
#include<iostream>
#include<string>

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

    void displaydata()
    {
        std::cout<<dd<<"\\"<<mm<<"\\"<<yy<<std::endl;
    }
    int getDay() {return dd;}
    int getMonth() {return mm;}
    int getYear(){ return yy;}
};
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
    dates(datei& di)//Conversion/casting operator
    {
        dstr=std::to_string(di.getDay())+"\\"+std::to_string(di.getMonth())+"\\"+std::to_string(di.getYear());

    }
    void displaydata()
    {
        std::cout<<dstr<<std::endl;
    }
};
int main()
{
    dates ds;
    datei di(11,8,1996);
    di.displaydata();
    ds=di;//First it tries to find overload assignment operator otherwise Constructor is used
    ds.displaydata();
    return 0;
}
