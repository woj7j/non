#include <iostream>
using namespace std;
#include <string>


class Zaina
{

public:
int age;
int tall;
string resident;
string nationality;

void print()
{
cout << "her age: "<<age<<endl;
cout<< "her tall: "<<tall<<endl;
cout<<"resident in: "<<resident<<endl;
cout<<"her nationality: "<<nationality<<endl;
}


};

int main ()
{

Zaina ob1;
ob1.age=19;
ob1.tall=153;
ob1.resident="aqaba";
ob1.nationality="jordanian";

ob1.print();














return 0;
}
