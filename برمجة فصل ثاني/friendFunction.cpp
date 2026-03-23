//?friend function
#include <iostream>
using namespace std;
class School
{
private:
int mark;
public:
School()
{
mark=100;
}
School(int x)
{
mark=200;
}
void getMark();
friend void getMark2(School z1);
};
void getMark2(School z1)
{
cout <<"mark equal= "<<z1.mark<<endl;
}
void School::getMark()
{
cout<<"mark equal= "<<mark<<endl;
}
int main()
{
School ob1;
School ob2(8);
ob1.getMark();
getMark2(ob2);
    return 0;
}