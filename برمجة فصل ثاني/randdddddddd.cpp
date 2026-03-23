#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
int main()
{
srand(time(0));
for ( int i=0;i<100;i++)
{
int x,y,z;
x=rand()%5;
y=rand()%5;
cout<<x<<"+"<<y<<"="<<x+y<<endl;
}
return 0;
}
*******************************************************************
#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
int main()
{
srand(9);                 إدخال يدوي        
for ( int i=0;i<100;i++)
{
int x,y,z;
x=rand()%5;
y=rand()%5;
cout<<x<<"+"<<y<<"="<<x+y<<endl;
}
return 0;
}
********************************************************************
#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
int main()
{
srand(time(0));
for ( int i=0;i<5;i++)
{
int x,y,z;
x=rand()%5;
y=rand()%5;


for ( int i=0;i<1;i++)
{
cout<<x<<"+"<<y<<"="<<x+y<<endl;
}

}
return 0;
}
*****************************************************************
عشان أخلي 5 تطلع بنزيد واحد زي هيك:
#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
int main()
{
srand(time(0));
for ( int i=0;i<100;i++)
{
int x,y,z;
x=rand()%5+1;
y=rand()%5+1;
cout<<x<<"+"<<y<<"="<<x+y<<endl;
}
return 0;
}
