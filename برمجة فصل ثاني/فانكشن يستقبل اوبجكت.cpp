#include <iostream>
using namespace std;
#include <string>
class N1
{
public:
	string name;
	string color;
	int age;
	string phone;
	void print(N1 zd)
	{
		cout<<"the name is : "<<zd.name<<endl;
		cout<<"the age is : "<<zd.age<<endl;
		cout<<"the color is : "<<zd.color<<endl;
		cout<<"the phone number is : "<<zd.phone<<endl;
	}
};
int main()
{
N1 ob1;
ob1.name="zaina";
ob1.color="bink";
ob1.phone="0776470188";
ob1.age=19;
N1 ob2;
ob2.name="ahmad";
ob2.age=14;
ob2.color="blue";
ob2.phone="0782863912";
ob2.print(ob2);
cout<<"________________________________"<<endl;
ob2.print(ob1);
return 0;
}