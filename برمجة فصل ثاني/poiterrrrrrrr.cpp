#include <iostream>
using namespace std;
int main()
{
int x[5]={10,20,30,40,50};

for(int m=0;m<=40;m++)
{
int i;
cout<<"Enter the number of array you want from 0-4 : ";    
cin>>i;
if (i>=0 && i<=4)
{
cout<<"the addres : "<<x+i<<endl;
cout<<"the value : "<<*(x+i)<<endl;
}
else
{
cout<<"the program finish"<<endl;
break;
}
}
    return 0;
}
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include <iostream> 
using namespace std; 
int main()
{ int x[5]={10,20,30,40,50}; 
for (int i=0;i<=4;i++) 
{ 
int y; 
cout<<"Enter the number of array you want from 0-4 : "; 
cin>>y; 
if (y==0)
{ 
cout<<"the addres : "<<x+y<<endl;
cout<<"the value : "<<*(x+y)<<endl;
}
else if (y==1)
{
cout<<"the addres : "<<x+y<<endl;
cout<<"the value : "<<*(x+y)<<endl;
} 
else if (y==2) 
{
cout<<"the addres : "<<x+y<<endl; 
cout<<"the value : "<<*(x+y)<<endl;
} 
else if(y==3)
{
cout<<"the addres : "<<x+y<<endl;
cout<<"the value : "<<*(x+y)<<endl;
}
else if(y==4)
{
cout<<"the addres : "<<x+y<<endl;
cout<<"the value : "<<*(x+y)<<endl; 
}
}
return 0;
}
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;

int main()
{
    int x[5]={10,20,30,40,50};
    string name[5]={"first","second","third","fourth","fifth"};

    for (int i=0;i<5;i++)
    {
        int y;
        cout<<"Enter index from 0-4: ";
        cin>>y;

        if (y>=0 && y<5)
        {
            cout<<"the "<<name[y]<<" address: "<<(x+y)<<endl;
            cout<<"the "<<name[y]<<" value: "<<x[y]<<endl;
        }
        else
        {
            cout<<"Invalid index"<<endl;
        }
    }

    return 0;
}
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include <iostream>
using namespace std;

int main()
{
    int x[5] = {10, 20, 30, 40, 50};
    string name[5] = {"first", "second", "third", "fourth", "fifth"};

    while(true)
    {
        int y;
        cout << "Enter index from 0-4 (negative to exit): ";
        cin >> y;

        if (y < 0) // للخروج
        {
            cout << "Program finished." << endl;
            break;
        }
        else if (y >= 0 && y < 5)
        {
            cout << "The " << name[y] << " address: " << &x[y] << endl;
            cout << "The " << name[y] << " value: " << x[y] << endl;
        }
        else
        {
            cout << "Invalid index!" << endl;
        }
    }

    return 0;
}
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include <iostream>
using namespace std;

int main()
{
    int y[100] = {0}; // تهيئة المصفوفة كلها بالصفر
    for(int i=0; i<4; i++)
    {
        int x;
        cout << "Enter the number you want to learn address and value: ";
        cin >> x;

        y[i] = x; // خزّن الرقم في المصفوفة

        cout << "Address: " << &y[i] << endl;
        cout << "Value: " << y[i] << endl;
        cout << "*****************" << endl;
    }

    return 0;
}
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
