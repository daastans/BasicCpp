/*It is type of inheritance in which one class inherits from more than once class*/
#include<iostream>
#include<string>

class item
{
private:
    std::string title;
    float price;
public:
    item(std::string t,float p)
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
    sales(float a,float b,float c)
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
    hwitem(std::string t,float p,float a,float b,float c,std::string cat,std::string o):item(t,p),sales(a,b,c)
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
    switem(std::string t,float p,float a,float b,float c,std::string cat,std::string o):item(t,p),sales(a,b,c)
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
    /*Now to initialize values of base clases we have called their respctive costructors
    with the constructor of derived class the constructer will be called in the order they are declared while inheriting
    Also note Destructors are called in reverse order    */
    item i("Iphone 6",28000.73);
    i.displayData();
    sales sf(28.44,55.36,22.97);
    sf.displayData();
    hwitem hi("Iphone 6",28000.73,28.44,55.36,22.97,"SmartPhone","Apple Inc");
    hi.displayData();
    switem si("Iphone 6",28000.73,28.44,55.36,22.97,"iOS","version 10");
    si.displayData();
    std::cout<<"Size of i : "<<sizeof(i)<<" sf: "<<sizeof(sf)<<" hi : "<<sizeof(hi)<<" si : "<<sizeof(si)<<std::endl;
    return 0;
}
//Note in case of name conflict of functions we can use scope resolution operator
//NOt all functions are inherited for example constructor/Destructors and operator=() are not inherited
//if you fail to provide these in derived class these added automatically
