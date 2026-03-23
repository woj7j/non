#include <iostream>
using namespace std;
class Student
{
private:
    string name;
    int mark;

public:
    Student()
    {
        cout << "\n\nEnter name student and their mark: " << endl;
        cin >> name;
        cin >> mark;
        cout << "\n*********************" << endl
             << endl;
    }
    Student(int x)
    {
    }
    void checkMarks(Student z1, Student z2, Student z3)
    {
        if (z1.mark > z2.mark && z1.mark > z3.mark)
        {
            cout << "the highest mark is  " << z1.mark << " and name is " << z1.name << endl;
        }
        else if (z2.mark > z1.mark && z2.mark > z3.mark)
        {
            cout << "the highest mark is " << z2.mark << " and name is " << z2.name << endl;
        }
        else if (z3.mark > z2.mark && z3.mark > z1.mark)
        {
            cout << "the highest mark is " << z3.mark << " and name is " << z3.name << endl;
        }
    }
    friend void sum(Student z1, Student z2, Student z3);
};
void sum(Student z1, Student z2, Student z3)
{
    cout << "the sum of marks= " << z1.mark + z2.mark + z3.mark << endl;
}
int main()
{
    Student ob1;
    Student ob2;
    Student ob3;
    ob1.checkMarks(ob1, ob2, ob3);
    sum(ob1, ob2, ob3);

    return 0;
}
********************************
#include <iostream>
using namespace std;
class Student
{
private:
    string name;
    int mark;

public:
    Student()
    {
        cout << "\n\nEnter name student and their mark: " << endl;
        cin >> name;
        cin >> mark;
        cout << "\n*********************" << endl
             << endl;
    }
    Student(string n, int x)
    {
        name=n;
        mark=x;
    }
    void checkMarks(Student z1, Student z2, Student z3)
    {
        if (z1.mark > z2.mark && z1.mark > z3.mark)
        {
            cout << "the highest mark is  " << z1.mark << " and name is " << z1.name << endl;
        }
        else if (z2.mark > z1.mark && z2.mark > z3.mark)
        {
            cout << "the highest mark is " << z2.mark << " and name is " << z2.name << endl;
        }
        else if (z3.mark > z2.mark && z3.mark > z1.mark)
        {
            cout << "the highest mark is " << z3.mark << " and name is " << z3.name << endl;
        }
    }
    friend void sum(Student z1, Student z2, Student z3);
};
void sum(Student z1, Student z2, Student z3)
{
    cout << "the sum of marks= " << z1.mark + z2.mark + z3.mark << endl;
}
int main()
{
    Student ob1;
    Student ob2;
    Student ob3;
    ob1.checkMarks(ob1, ob2, ob3);
    sum(ob1, ob2, ob3);
     
    Student ob4("zaina",99);
    Student ob5("ahmad",98);
    Student ob6("hend",100);
    ob1.checkMarks(ob4, ob5, ob6);
    sum(ob4, ob5, ob6);

    return 0;
}