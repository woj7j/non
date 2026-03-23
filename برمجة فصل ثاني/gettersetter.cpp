#include <iostream>
using namespace std;
class Company
{
private:
string name;
int salary;
public:
void setValue()
{
cout<<"Enter Employ name: ";
cin>>name;
cout<<"Enter The Salary: ";
cin>>salary;
cout<<"************************"<<endl;
}
int getSalary()
{
return salary;
}
};
int main()
{
Company ob1;
Company ob2;
ob1.setValue();
ob2.setValue();
cout<<"The Sum Of Salaries is: ";
cout<<ob1.getSalary()+ob2.getSalary()<<endl;
    return 0;
}
***************************************