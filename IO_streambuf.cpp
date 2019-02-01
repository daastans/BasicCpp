/*  The streambuff class manages the buffer , Each stream object contains
pointer to this buffer. It can be accessed through rdbuf()
You can connect this buffer to another stream object  which would move
all  the bytes from the buffer of one object into that of another*/

#include<fstream>
using namespace std;
int main()
{
    ifstream in("Sample.txt");
    ofstream out("demo.txt");

    out<<in.rdbuf();//it copies all bytes form if to of

}
