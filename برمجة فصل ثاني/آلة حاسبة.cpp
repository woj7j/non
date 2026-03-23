#include <iostream>
using namespace std;
class X
{
private:
int x;
int y;
public:
X()
{
cout<<"hello welcome again.........."<<endl;
}
X(int a, int b)
{
x=a;
y=b;
}
void func()
{
cout<<"a= "<<x<<endl;
cout<<"b= "<<y<<endl;
}
};
int main()
{
X ob2;
X ob1(1,2);
ob1.func();
ob2.func();
    return 0;
}
**************************************
#include <iostream>
using namespace std;
class Cal
{
private:
int n1;
int n2;
public:
Cal ()
{
cout<<"Enter The First Number: ";
cin>>n1;
cout<<"Enter The Second Number: ";
cin>>n2;
}
Cal(int x, int y)
{
n1=x;
n2=y;
}
void sum()
{
cout<<"the sum of number is= "<<n1+n2<<endl;
}
float divide()
{
cout<<"the result of divide= "<<(float)n1/n2<<endl;	
}
void mod()
{
cout<<"the result of modulus= "<<n1%n2<<endl;	
}
void mult()
{
cout<<"the result of mult= "<<n1*n2<<endl;	
}
};
int main()
{
for(int i=0;i<2;i++)
{
Cal ob1;
cout<<"add(+),mult(*),mod(%),devide(/)"<<endl;
string x;
cin>>x;
if(x=="+")
ob1.sum();
if(x=="/")
ob1.divide();
if(x=="%")
ob1.mod();
if(x=="*")
ob1.mult();
cout<<"*******************"<<endl;
}
Cal ob2;
	return 0;
}