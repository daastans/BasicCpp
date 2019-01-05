/*Refrences can save memory needed for separate variable declaration
during function calls however their modifications are reflected in original
variables to prevent accidental modification we can use const references*/

#include<bits/stdc++.h>
using namespace std;
void change(const int &);
int main()
{
  int i=108;
  change(i);

  return 0;
}

void change(const int &j)
{
    j++; //error here since j is constant reference
}
//Reference does not take space in main stack only symbol table is updated.
