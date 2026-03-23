#include <iostream>
using namespace std;
#include <string>
class N1
{
public:
	string n;
	string co;
	int ag;
	string ph;
	void save(string name, string color, string phone, int age)
	{
	  n=name;
	  co=color;
	  ph=phone;
	  ag=age;
	}
	void display()
	{
	cout<<"the name is : "<<n<<endl;
	cout<<"the color is : "<<co<<endl;
	cout<<"the phone number is : "<<ph<<endl;
	cout<<"the age is : "<<ag<<endl;
	}
};
int main()
{
N1 ob1;
ob1.save("zaina","bink","0776470188",19);
ob1.display();
cout<<"________________________________"<<endl;

return 0;
}