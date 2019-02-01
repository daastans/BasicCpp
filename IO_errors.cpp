#include<fstream>
#include<iostream>
#include<ios>
using namespace std;
void report(ifstream&);
int main()
{
    ifstream file;
    file.open("ssample.txt");

    if(!file)
    {
        report(file);
        exit(1);
    }
    else
    {
        file.close();
        ofstream of("ssample.txt");
        of<<"Survived ios::noreplace\n";
        of.close();
    }

return 0;
}
void report(ifstream& file)
{
    cout<<endl<<"Unable to open sample.txt";
    cout<<endl<<"Error state= "<<file.rdstate();
    cout<<endl<<"good()="<<file.good();
    cout<<endl<<"eof()="<<file.fail();
    cout<<endl<<"fail()="<<file.fail();
    cout<<endl<<"bad()="<<file.bad()<<endl;
}
