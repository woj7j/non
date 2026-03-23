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
x=40+rand()%(50-40+1);
y=40+rand()%(50-40+1);

cout<<x<<"+"<<y<<"="<<x+y<<endl;
}
return 0;
}
*************************************************************************
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
x=40+rand()%(50-40);                         ما رح يطبع 50
y=40+rand()%(50-40);

cout<<x<<"+"<<y<<"="<<x+y<<endl;
}
return 0;
}