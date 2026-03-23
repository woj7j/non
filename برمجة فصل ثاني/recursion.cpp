#include <iostream>
using namespace std;
int fun(int n)
{
    if (n==0)
    return 1;
    else
    return 7+fun(n-1);
//return 7 + fun 3            29           
//return 7 + fun 2            22
// return 7+ fun 1            15
// return 7 + fun 0           8
// return 1 
}
int main()
{
    cout<<fun(4)<<endl;
    return 0;
}
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include <iostream>
using namespace std;
int fun(int n)
{
    if (n==0)
    return 1;
    else
    return 7+fun(n-2);
//return 7 + fun 2       15               
//return 7 + fun 0       8     
// return 1         
 
}
int main()
{
    cout<<fun(4)<<endl;
    return 0;
}
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include <iostream>
using namespace std;
int fun(int n)
{
    if (n==2)
    return 1;
    else
    return n*fun(n-1);
     
 // 4*fun 3         12
 // 3*fun 2         3
 // return 1 
}
int main()
{
    cout<<fun(4)<<endl;
    return 0;
}
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include <iostream>
using namespace std;
int fun(int n)
{
    if (n==1)
    return 1;
    else
    return n*fun(n-1);
     
 // 4*fun 3        24
 // 3*fun 2        6
 // 2*fun 1        2
 // return 1
}
int main()
{
    cout<<fun(4)<<endl;
    return 0;
}
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@