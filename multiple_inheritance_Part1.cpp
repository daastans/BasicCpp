/*It is type of inheritance in which one class inherits from more than once class*/
#include<iostream>
#include<string>

class item
{
private:
    std::string title;
    float price;
public:
    void getData(std::string t,float p)
    {
        title=t;
        price=p;
    }
    void displayData()
    {
        std::cout<<"Title : "<<title<<"\t Price : "<<price<<std::endl;
    }
};
class sales
{
private:
    float salesFigure[3];//Sales of previous three month
public:
    void getData(float a,float b,float c)
    {
        salesFigure[0]=a;salesFigure[1]=b;salesFigure[2]=c;
    }
    void displayData()
    {
        std::cout<<"Sales figure : ";
        for(int i=0;i<3;i++)
        {
            std::cout<<salesFigure[i]<<"\t";
        }
        std::cout<<std::endl<<std::endl;
    }
};
class hwitem:private item,private sales
{
private:
    std::string category;
    std::string oem;
public:
    void getData(std::string cat,std::string o)
    {
        category=cat;
        oem=o;
    }
    void displayData()
    {
        item::displayData();
        std::cout<<"Category : "<<category<<"\t"<<"OEM : "<<oem<<std::endl;
        sales::displayData();
    }
};
class switem:private sales,private item
{
private:
    std::string category;
    std::string os;
public:
    void getData(std::string cat,std::string o)
    {
        category=cat;
        os=o;
    }
    void displayData()
    {
        item::displayData();
        std::cout<<"Category : "<<category<<"\t"<<"OS : "<<os<<std::endl;
        sales::displayData();
    }

};
int main()
{
    /*We can see that all objects work independent of each other*/
    item i;i.getData("Iphone 6",28000.73);
    i.displayData();
    sales sf;sf.getData(28.44,55.36,22.97);
    sf.displayData();
    hwitem hi;hi.getData("Mobile","Apple");
    hi.displayData();
    switem si;si.getData("iOS","version 10");
    si.displayData();
    std::cout<<"Size of i : "<<sizeof(i)<<" sf: "<<sizeof(sf)<<" hi : "<<sizeof(hi)<<" si : "<<sizeof(si)<<std::endl;

    return 0;
}
/* we can observe that elements were indeed inherited by hwitem and switem but as clear from their sizes
But Object as a whole was not initialized In part 2 this inconsistency is removed*/
