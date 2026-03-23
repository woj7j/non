#include <iostream>
using namespace std;                                        طباعة الأصغر والأكبر
int main()
{
for ( int i=0;i<100;i++)
{
int x,y,z;
cin>>x;
cout<<"the first number = "<<"( "<<x<<" )"<<endl;
cin>>y;
cout<<"the second number = "<<"( "<<y<<" )"<<endl;
cout<<"the max num = "<<max(x,y)<<endl;
cout<<"the min num = "<<min(x,y)<<endl;
cout<<"*****************************"<<endl;
}
return 0;
}
*******************************************************
#include <iostream>
using namespace std;                                          إدخال قيم مختلفة كل مرة
#include <cmath>
int main()
{
for ( int i=0;i<100;i++)
{
int x,y,z;
cin>>x;
cout<<"the first number = "<<"( "<<x<<" )"<<endl;
cin>>y;
cout<<"the second number = "<<"( "<<y<<" )"<<endl;
cout<<"the max num = "<<max(x,y)<<endl;
cout<<"the min num = "<<min(x,y)<<endl;
cout<<"*****************************"<<endl;
for ( int i=0;i<1;i++)
{
int x,y,z;
cin>>x;
cout<<"the first number = "<<"( "<<x<<" )"<<endl;
cin>>y;
cout<<"the second number = "<<"( "<<y<<" )"<<endl;
cout<<x<<" power "<<y<<" = "<<"( "<<pow(x,y)<<" )"<<endl;
cout<<"*****************************"<<endl;
}
for ( int i=0;i<1;i++)
{
int x,y,z;
cin>>x;
cout<<"the square root of = "<<" ( "<<x<<" ) "<<"= "<<sqrt(x)<<endl;

cout<<"*****************************"<<endl;
}
}
return 0;
}
بعد التعديللللللللللللل:
#include <iostream>
using namespace std;   
#include <cmath>
int main()
{
for ( int i=0;i<100;i++)
{
int x,y,z;
cin>>x;
cout<<"the first number = "<<"( "<<x<<" )"<<endl;
cin>>y;
cout<<"the second number = "<<"( "<<y<<" )"<<endl;
cout<<"the max num = "<<max(x,y)<<endl;
cout<<"the min num = "<<min(x,y)<<endl;
cout<<"*****************************"<<endl;

cin>>x;
cout<<"the first number = "<<"( "<<x<<" )"<<endl;
cin>>y;
cout<<"the second number = "<<"( "<<y<<" )"<<endl;
cout<<x<<" power "<<y<<" = "<<"( "<<pow(x,y)<<" )"<<endl;
cout<<"*****************************"<<endl;

cin>>x;
cout<<"the square root of = "<<" ( "<<x<<" ) "<<"= "<<sqrt(x)<<endl;

cout<<"*****************************"<<endl;
}
return 0;
}
*************************************************
#include <iostream>
using namespace std;                   إدخال قيم مرة وحدة
#include <cmath>
int main()
{
int x,y,z;     

for ( int i=0;i<=3;i++)
{
cin>>x;
cin>>y; 
cout<<"the first number = "<<"( "<<x<<" )"<<endl;
cout<<"the second number = "<<"( "<<y<<" )"<<endl;
cout<<"the max num = "<<max(x,y)<<endl;
cout<<"the min num = "<<min(x,y)<<endl;
cout<<"*****************************"<<endl;
for ( int i=0;i<1;i++)
{
cout<<"the first number = "<<"( "<<x<<" )"<<endl;
cout<<"the second number = "<<"( "<<y<<" )"<<endl;
cout<<x<<" power "<<y<<" = "<<"( "<<pow(x,y)<<" )"<<endl;
cout<<"*****************************"<<endl;
}
for ( int i=0;i<1;i++)
{
cout<<"the square root of = "<<" ( "<<x<<" ) "<<"= "<<sqrt(x)<<endl;
cout<<"*****************************"<<endl;
}
}
return 0;
}
بعد التعديل: #######################
#include <iostream>
using namespace std;                  
#include <cmath>
int main()
{
int x,y,z;     
for ( int i=0;i<=3;i++)
{
cin>>x;
cin>>y; 
cout<<"the first number = "<<"( "<<x<<" )"<<endl;
cout<<"the second number = "<<"( "<<y<<" )"<<endl;
cout<<"the max num = "<<max(x,y)<<endl;
cout<<"the min num = "<<min(x,y)<<endl;
cout<<"*****************************"<<endl;
cout<<x<<" power "<<y<<" = "<<"( "<<pow(x,y)<<" )"<<endl;
cout<<"*****************************"<<endl;
cout<<"the square root of = "<<" ( "<<x<<" ) "<<"= "<<sqrt(x)<<endl;
cout<<"*****************************"<<endl;
}
return 0;
}
**********************************************************
عدم طباعة السالب مثال
#include <iostream>
using namespace std;                  
#include <cmath>
int main()
{
int x,y,z;     
for ( int i=0;i<=3;i++)
{
cin>>x;
cin>>y; 
cout<<"the first number = "<<"( "<<x<<" )"<<endl;
cout<<"the second number = "<<"( "<<y<<" )"<<endl;
cout<<"the max num = "<<max(x,y)<<endl;
cout<<"the min num = "<<min(x,y)<<endl;
cout<<"*****************************"<<endl;
cout<<x<<" power "<<y<<" = "<<"( "<<pow(x,y)<<" )"<<endl;
cout<<"*****************************"<<endl;
   if(x >= 0)
            cout << "Square root of " << x << " = " << sqrt(x) << endl;
        else
            cout << "Cannot calculate square root of a negative number." << endl;
cout<<"*****************************"<<endl;
}
return 0;
}
**********************************************************
#include <iostream>
using namespace std;                  
#include <cmath>
int main()
{
float x,y,z,m,n,o,b,q;    
for ( int i=0;i<=3;i++)
{
cin>>x;
cin>>y; 
cout<<"the first number = "<<"( "<<x<<" )"<<endl;
cout<<"the second number = "<<"( "<<y<<" )"<<endl;
cout<<"*****************************"<<endl;
cout<<"the max num = "<<max(x,y)<<endl;
cout<<"the min num = "<<min(x,y)<<endl;
cout<<"*****************************"<<endl;
cout<<x<<" power "<<y<<" = "<<"( "<<pow(x,y)<<" )"<<endl;
cout<<"*****************************"<<endl;
   if(x >= 0)
            cout << "Square root of " << x << " = " << sqrt(x) << endl;
        else
            cout << "Cannot calculate square root of a negative number." << endl;
cout<<"*****************************"<<endl;
cout<<"ENTER THE NUMBER FOR NEAREST ROUND !"<<endl;
cin>>z;
cout<<"Round to the nearest integer = "<<ceil(z)<<endl;
cout<<"*****************************"<<endl;
cout<<"ENTER THE NUMBER FOR NEAREST ROUND DOWN !"<<endl;
cout<<"Round down to the nearest integer = "<<floor(z)<<endl;
cout<<"*****************************"<<endl;
cout<<"ENTER THE NEGATIVE NUM !"<<endl;
cin>>m;
cout<<"the Absolute value = "<<fabs(m)<<endl;
cout<<"*****************************"<<endl;
cout<<"CHOSE THE Triangular angles DO YOU WANT TO KNOW !"<<endl;
cin>>n;
cout<<"sin"<<"("<<n<<")"<<"="<<sin(n)<<endl;
cout<<"cos"<<"("<<n<<")"<<"="<<cos(n)<<endl;
cout<<"tan"<<"("<<n<<")"<<"="<<tan(n)<<endl;
cout<<"*****************************"<<endl;
cout<<"CHOSE THE POWER OF EXPONENTIAL !!!"<<endl;
cin>>q;
cout<<"exponetial power of num "<<q<<" = "<<exp(q)<<endl;
cout<<"*****************************"<<endl;
cout<<"to calculate the modulus!!!!!!!!!!!"<<endl;
cout<<"the first number = "<<endl;
cin>>o;
cout<<"the second number = "<<endl;
cin>>b;
cout<<"the % of two number that not integer = "<<fmod(o,b)<<endl;
cout<<"*****************************"<<endl;
}
return 0;
}
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include <iostream>
using namespace std;                  
#include <cmath>
int main()
{
float x,y,z,m,n,o,b,q;    نفس الي فوق بس حولنا الزاوية لراديان 
for ( int i=0;i<=3;i++)
{
cin>>x;
cin>>y; 
cout<<"the first number = "<<"( "<<x<<" )"<<endl;
cout<<"the second number = "<<"( "<<y<<" )"<<endl;
cout<<"*****************************"<<endl;
cout<<"the max num = "<<max(x,y)<<endl;
cout<<"the min num = "<<min(x,y)<<endl;
cout<<"*****************************"<<endl;
cout<<x<<" power "<<y<<" = "<<"( "<<pow(x,y)<<" )"<<endl;
cout<<"*****************************"<<endl;
   if(x >= 0)
            cout << "Square root of " << x << " = " << sqrt(x) << endl;
        else
            cout << "Cannot calculate square root of a negative number." << endl;
cout<<"*****************************"<<endl;
cout<<"ENTER THE NUMBER FOR NEAREST ROUND !"<<endl;
cin>>z;
cout<<"Round to the nearest integer = "<<ceil(z)<<endl;
cout<<"*****************************"<<endl;
cout<<"ENTER THE NUMBER FOR NEAREST ROUND DOWN !"<<endl;
cout<<"Round down to the nearest integer = "<<floor(z)<<endl;
cout<<"*****************************"<<endl;
cout<<"ENTER THE NEGATIVE NUM !"<<endl;
cin>>m;
cout<<"the Absolute value = "<<fabs(m)<<endl;
cout<<"*****************************"<<endl;
cout<<"CHOSE THE Triangular angles DO YOU WANT TO KNOW !"<<endl;
cin>>n;
n=n*M_PI/180;
cout<<"sin"<<"("<<n<<")"<<"="<<sin(n)<<endl;
cout<<"cos"<<"("<<n<<")"<<"="<<cos(n)<<endl;
cout<<"tan"<<"("<<n<<")"<<"="<<tan(n)<<endl;
cout<<"*****************************"<<endl;
cout<<"CHOSE THE POWER OF EXPONENTIAL !!!"<<endl;
cin>>q;
cout<<"exponetial power of num "<<q<<" = "<<exp(q)<<endl;
cout<<"*****************************"<<endl;
cout<<"to calculate the modulus!!!!!!!!!!!"<<endl;
cout<<"the first number = "<<endl;
cin>>o;
cout<<"the second number = "<<endl;
cin>>b;
cout<<"the % of two number that not integer = "<<fmod(o,b)<<endl;
cout<<"*****************************"<<endl;
}
return 0;
}
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include <iostream>
using namespace std;                  
#include <cmath>
int main()                                           طريقة ثاني لكتابة الزاوية
{
float x,y,z,m,n,o,b,q,c;    
for ( int i=0;i<=3;i++)
{
cin>>x;
cin>>y; 
cout<<"the first number = "<<"( "<<x<<" )"<<endl;
cout<<"the second number = "<<"( "<<y<<" )"<<endl;
cout<<"*****************************"<<endl;
cout<<"the max num = "<<max(x,y)<<endl;
cout<<"the min num = "<<min(x,y)<<endl;
cout<<"*****************************"<<endl;
cout<<x<<" power "<<y<<" = "<<"( "<<pow(x,y)<<" )"<<endl;
cout<<"*****************************"<<endl;
   if(x >= 0)
            cout << "Square root of " << x << " = " << sqrt(x) << endl;
        else
            cout << "Cannot calculate square root of a negative number." << endl;
cout<<"*****************************"<<endl;
cout<<"ENTER THE NUMBER FOR NEAREST ROUND !"<<endl;
cin>>z;
cout<<"Round to the nearest integer = "<<ceil(z)<<endl;
cout<<"*****************************"<<endl;
cout<<"ENTER THE NUMBER FOR NEAREST ROUND DOWN !"<<endl;
cout<<"Round down to the nearest integer = "<<floor(z)<<endl;
cout<<"*****************************"<<endl;
cout<<"ENTER THE NEGATIVE NUM !"<<endl;
cin>>m;
cout<<"the Absolute value = "<<fabs(m)<<endl;
cout<<"*****************************"<<endl;
cout<<"CHOSE THE Triangular angles DO YOU WANT TO KNOW !"<<endl;
cin>>n;
c=n*acos(-1)/180;
cout<<"sin"<<"("<<c<<")"<<"="<<sin(c)<<endl;
cout<<"cos"<<"("<<c<<")"<<"="<<cos(c)<<endl;
cout<<"tan"<<"("<<c<<")"<<"="<<tan(c)<<endl;
cout<<"*****************************"<<endl;
cout<<"CHOSE THE POWER OF EXPONENTIAL !!!"<<endl;
cin>>q;
cout<<"exponetial power of num "<<q<<" = "<<exp(q)<<endl;
cout<<"*****************************"<<endl;
cout<<"to calculate the modulus!!!!!!!!!!!"<<endl;
cout<<"the first number = "<<endl;
cin>>o;
cout<<"the second number = "<<endl;
cin>>b;
cout<<"the % of two number that not integer = "<<fmod(o,b)<<endl;
cout<<"*****************************"<<endl;
}
return 0;
}