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
N1()
{
cout <<"welcome"<<endl;
}
	void print()
	{
		cout<<"the name is : "<<name<<endl;
		cout<<"the age is : "<<age<<endl;
		cout<<"the color is : "<<color<<endl;
		cout<<"the phone number is : "<<phone<<endl;
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
ob2.print();
cout<<"________________________________"<<endl;

return 0;
}