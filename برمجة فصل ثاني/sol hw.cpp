#include <iostream>
using namespace std;
void neww()
{
    
    int x = 1;
    int y = 2;
    int temp=x;
    x=y;
    y=temp;
cout<<x<<endl;   
cout<<y<<endl;
    
    
    
}
void newww()
{
    
    int x = 1;
    int y = 2;
    int temp=y;
    y=x;
    x=temp;
cout<<x<<endl;   
cout<<y<<endl;
    
    
    
}
int main()
{

    int x = 1;
    int y = 2;
    int temp=x+y;
    x=temp-x; //x=x+y-x=y=2
    y=temp-y; //y=x+y-y=x=1
cout<<x<<endl;   
cout<<y<<endl;
cout<<"**********"<<endl;
neww();   
cout<<"**********"<<endl;
newww();
    return 0;
}
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include <iostream>
using namespace std;
void neww(int x,int y)
{
    
   int temp=x;
    x=y;
    y=temp;
cout<<x<<endl;   
cout<<y<<endl;
    
    
    
}
void newww()
{
    
    int x = 1;
    int y = 2;
    int temp=y;
    y=x;
    x=temp;
cout<<x<<endl;   
cout<<y<<endl;
    
    
    
}
int main()
{

    int x = 1;
    int y = 2;
    int temp=x+y;
    x=temp-x; //x=x+y-x=y=2
    y=temp-y; //y=x+y-y=x=1
cout<<x<<endl;   
cout<<y<<endl;
cout<<"**********"<<endl;
neww(1,2);   
cout<<"**********"<<endl;
newww();
    return 0;
}
@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include <iostream>
using namespace std;
void neww(int x,int y, int temp)
{
    
    temp=x; //ما بصير نحط انتيجر هون لإنه عرفناه فوق ما بصير نعرفه مرتين
    x=y;
    y=temp;
cout<<x<<endl;   
cout<<y<<endl;
    
    
    
}
void newww()
{
    
    int x = 1;
    int y = 2;
    int temp=y;
    y=x;
    x=temp;
cout<<x<<endl;   
cout<<y<<endl;
    
    
    
}
int main()
{

    int x = 1;
    int y = 2;
    int temp=x+y;
    x=temp-x; //x=x+y-x=y=2
    y=temp-y; //y=x+y-y=x=1
cout<<x<<endl;   
cout<<y<<endl;
cout<<"**********"<<endl;
neww(1,2,0);   
cout<<"**********"<<endl;
newww();
    return 0;
}
