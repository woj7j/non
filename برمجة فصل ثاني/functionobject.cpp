#include <iostream>
using namespace std;
class School
{
private:
    string name;
    int mark;

public:
    School(string n, int m)
    {
        name = n;
        mark = m;
    }
    int getMark()
    {
        return mark;
    }
    void getMark2(School z1, School z2)
    {
        cout << z1.mark + z2.mark << endl;
    }
};
int main()
{
    School ob1("zaina", 91.75);
    School ob2("ahmad", 81.25);
    cout << ob1.getMark() + ob2.getMark() << endl;
    ob1.getMark2(ob1, ob2);
    return 0;
}