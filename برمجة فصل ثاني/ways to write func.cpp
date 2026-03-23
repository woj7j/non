#include <iostream>
using namespace std;

int sum (int x, int y);
int main()
{

for (int i=0;i<=5;i++)

{
int x,y;
cin>>x;
cin>>y;
cout <<"the resuult is = "<<sum(x,y)<<endl;
}






return 0;
}
int sum (int x, int y)
{
   return x+y;                                لازم نرجع القيمة 
}
************************************************************
#include <iostream>
using namespace std;

void sum (int x, int y);
int main()
{

for (int i=0;i<=5;i++)

{
int x,y;
cin>>x;
cin>>y;
sum(x,y);
}






return 0;
}
void sum (int x, int y)
{
cout <<"the resuult is = "<<x+y<<endl;                                     الفويد ما بتزبط إلا جملة طباعة بالفنكشن
}
**********************************************************
#include <iostream>
using namespace std;

int sum (int x, int y);
int main()
{

for (int i=0;i<=5;i++)

{
int x,y;
cin>>x;
cin>>y;
sum(x,y);
}






return 0;
}
int sum (int x, int y)
{
cout <<"the resuult is = "<<x+y<<endl;
return 0;                                      هون لازم نرجعها عشان جملة طباعة
}
