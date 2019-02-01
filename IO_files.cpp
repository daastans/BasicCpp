#include<fstream>
#include <iostream>
using namespace std;
int main()
{
    ofstream outfile("Sample.txt");

    char ch='z';int a=8;float f=2.1498753;char str[]="Gandola";

    outfile<<ch<<endl<<a<<endl<<f<<endl<<str;//Note endl is important since numbers are written as numeric string like '4'
    //outfile<<ch<<a<<f<<str;//uncommenting this and you will note why endl was imp in line 10
    outfile.close();

    ifstream infile("Sample.txt");

    //while(!infile.eof())
    {
        char c;int i;float ff; string str;
        infile>>c>>i>>ff>>str;//endl helps to identify diff sets of date numeric string are converted back to binary numbers
        cout<<c<<endl<<i<<endl<<ff<<endl<<str<<endl;
    }
return 0;
}
