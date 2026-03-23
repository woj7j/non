#include <iostream>
using namespace std;
class Youtube
{
private:
string name;
int videos;
int sub;
public:
void first(string n,int vd,int sb)
{
    name=n;
    videos=vd;
    sub=sb;
}
void second()
{
    cout<<"***The Name Of Channel Is: "<<name<<endl;
    cout<<"***The Number Of Vedios Available on: "<<videos<<endl;
    cout<<"***The Number Of subscribes is: "<<sub<<endl<<endl;
}
};
int main()
{

Youtube ob1;
ob1.first("waraqa",20,112);
ob1.second();
Youtube ob2;
ob2.first("et3allambbsata",115,326000);
ob2.second();

    return 0;
}
*************************************************
#include <iostream>
using namespace std;
class Youtube
{
private:
string name;
int videos;
int sub;
public:
void first(string n,int vd,int sb)
{
    name=n;
    videos=vd;
    sub=sb;
}
void second()
{
    cout<<"***The Name Of Channel Is: "<<name<<endl;
    cout<<"***The Number Of Vedios Available on: "<<videos<<endl;
    cout<<"***The Number Of subscribes is: "<<sub<<endl<<endl;
}
};
int main()
{
    string x;
int y,z;
Youtube ob1;
cout<<"Enter the first value of string: ";
cin>>x;
cout<<"Enter the second value of int: ";
cin>>y;
cout<<"Enter the third value of int: ";
cin>>z;
ob1.first(x,y,z);
ob1.second();


    return 0;
}
****************************************************
#include <iostream>
using namespace std;
class Youtube
{
private:
string name;
int videos;
int sub;
public:
void first()
{
cout<<"Enter the first value of string: ";
cin>>name;
cout<<"Enter the second value of int: ";
cin>>videos;
cout<<"Enter the third value of int: ";
cin>>sub;   
}
void second()
{
    cout<<"***The Name Of Channel Is: "<<name<<endl;
    cout<<"***The Number Of Vedios Available on: "<<videos<<endl;
    cout<<"***The Number Of subscribes is: "<<sub<<endl<<endl;
}
};
int main()
{
Youtube ob1;
ob1.first();
ob1.second();


    return 0;
}
**********************************************
#include <iostream>
using namespace std;
class Circle
{
private:
    float radius;

public:
    void setValue()
    {
        cout << "Enter The Value Of Radius Of Circle= ";
        cin >> radius;
    }
    void printArea()
    {
        float x = 3.14;
        cout << "The Area Of Circle= " << radius * radius * x << endl;
    }
};
int main()
{
    Circle ob1;
    ob1.setValue();
    ob1.printArea();

    return 0;
}
******************************************
