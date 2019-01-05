#include<bits/stdc++.h>
using namespace std;

int main()
{
    const int i=10;
    /*The error is indicating that you cannot bind a non-const reference
     to a const-object, as that would drop (discard in other compiler's errors),
      disregard or ignore the const qualifier. What it tries to indicate is that if the operation was allowed you
       would be able to modify the object through the reference ignoring the
        fact that the object itself is const, breaking const-correctness*/
    int &j=i;//Error
    
/*The code below tries to tell you that reference variable is dependent on
variable and hence there is no meaning to define a constant reference since
it woudl get changed on changing the original variable*/
    int k=108;
    int const &b=k;
    cout<<k<<" "<<b<<endl;
    k=801;
    cout<<k<<" "<<b<<endl;


  return 0;
}
