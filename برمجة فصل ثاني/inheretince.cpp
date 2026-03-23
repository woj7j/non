#include <iostream>
using namespace std;
class Country
{
private:
    string name;
    int num;

public:
    void setValue()
    {
        name = "amman";
        num = 12;
    }
    void getValue()
    {
        cout << name << " " << num << endl;
    }
};
class City
{
private:
    string name;
    int num;
    int age;

public:
    void setValue()
    {
        name = "zozo";
        num = 30;
        age = 50;
    }
    void getValue()
    {
        cout << name << " " << num << " " << age << endl;
    }
};
int main()
{
    Country ob1;
    ob1.setValue();
    ob1.getValue();
    City ob2;
    ob2.setValue();
    ob2.getValue();
    return 0;
}
*****************************************************
#include <iostream>
using namespace std;
class first
{
private:
    int x;

public:
    first(int a)
    {
        x = a;
        cout << "hi i am first constructor..." << endl;
    }
};
class second : public first
{
private:
    int y;

public:
    second(int z, int b) : first(z)
    {
        y = b;
        cout << "hi i am second constructor..." << endl;
    }
    void print()
    {
        cout << "y= " << y << endl;
    }
};
int main()
{
    // first ob1(10);
    second ob2(20, 30);
    ob2.print();

    return 0;
}
*************************************************