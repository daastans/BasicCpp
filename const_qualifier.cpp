/*keyword is replacement of #define preprocessor in C++
one certain advantage of using it is that
You can define constants with variable scopes */
#include<bits/stdc++.h>
using namespace std;


int main()
{
  char *name1="Aman Sharma";//Pointer is variable so is string
  *name1='A';//works
  name1="Sharma";//works

  const char *name2="Aryan Raj";//Pointer is variable but string is constants
  *name2='A';//Error
  name2="Raj";//works

  char const  *name3="Nitish Dobriyal";//Pointer is variable but string is constants
  *name3='N';//Error
  name3="Dobriyal";//Works

  char* const name4="Sourav Chauhan";//Pointer is fixed ut string is variable
  *name4='S';//Works
  name4="Chouhan";//Error

  const char *const name5="Rohit Rai";//Pointer is fixed so is string.
  *name5='R';//Error
  name5="Rai";//Error

}
//You can run and see the results
