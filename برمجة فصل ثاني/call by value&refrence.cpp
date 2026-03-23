#include <iostream>
using namespace std;
int it(int now)
{
    cout<<"@ my degree in second semester is : "<<now<<endl;
    return 0;
}
int main()
{
    int x = 91.75;
    cout<< "@ my degree in first semester is : "<<x<<endl;
    
    it(99);
   
    return 0;
}
&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
#include <iostream>
using namespace std;
int it(int *now)
{
    *now=99;
    cout<<"@ my degree in second semester is : "<<*now<<endl;
    return 0;
}
int main()
{
    int x = 91.75;
    cout<< "@ my degree in first semester is : "<<x<<endl;
    
    it(&x);
   
    return 0;
}
&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
#include <iostream>
using namespace std;
int it(float *now)
{
    *now=99;
    cout<<"@ my degree in second semester is : "<<*now<<endl;
    return 0;
}
int main()
{
    float x = 91.75;
    cout<< "@ my degree in first semester is : "<<x<<endl;
    
    it(&x);
    cout<< "@ my degree now become good : "<<x<<endl;
    return 0;
}
&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
#include <iostream>
using namespace std;
int it(float *now, float *past)
{
    int v=*now;
    *now=*past;
    *past=v;
return 0;
}
int main()
{
    float x = 91.75;
    float y = 98.5;
    cout<<"@ my degree in first semester is : "<<x<<endl;
    cout<<"@ my degree in second semester is : "<<y<<endl;
    cout<<"*********************************"<<endl;
    it(&x,&y);
    cout<<"@ my degree in first semester is : "<<x<<endl;
    cout<<"@ my degree in second semester is : "<<y<<endl;
    return 0;
}
&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
#include <iostream>
using namespace std;
void it(float *now, float *past)
{
    int v=*now;
    *now=*past;
    *past=v;
     cout<<"@ my degree in first semester is : "<<*now<<endl;
    cout<<"@ my degree in second semester is : "<<*past<<endl;

}
int main()
{
    float x = 91.75;
    float y = 98.5;
    cout<<"@ my degree in first semester is : "<<x<<endl;
    cout<<"@ my degree in second semester is : "<<y<<endl;
    cout<<"*********************************"<<endl;
    it(&x,&y);
   
    return 0;
}
&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
#include <iostream>
using namespace std;
void it(float now, float past)                هون ما تغيرت القيمة 
{
    int v=now;
    now=past;
    past=v;
     
}
int main()
{
    float x = 91.75;
    float y = 98.5;
    cout<<"@ my degree in first semester is : "<<x<<endl;
    cout<<"@ my degree in second semester is : "<<y<<endl;
    cout<<"*********************************"<<endl;
    it(x,y);
   cout<<"@ my degree in first semester is : "<<x<<endl;
   cout<<"@ my degree in second semester is : "<<y<<endl;

    return 0;
}
&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
#include <iostream>
using namespace std;
void it(float x, float y)                
{
    int v=x;
    x=y;
    y=v;
     
}
int main()
{
    float x = 91.75;
    float y = 98.5;
    cout<<"@ my degree in first semester is : "<<x<<endl;
    cout<<"@ my degree in second semester is : "<<y<<endl;
    cout<<"*********************************"<<endl;
    it(x,y);
   cout<<"@ my degree in first semester is : "<<x<<endl;
   cout<<"@ my degree in second semester is : "<<y<<endl;

    return 0;
}
&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
#include <iostream>
using namespace std;
void it(float x, float y)                هون زبطت الفكرة اللي كانت مو زابطة قبل هاذ المثال
{
    int v=x;
    x=y;
    y=v;
   cout<<"@ my degree in first semester is : "<<x<<endl;
   cout<<"@ my degree in second semester is : "<<y<<endl;
}
int main()
{
    float x = 91.75;
    float y = 98.5;
    cout<<"@ my degree in first semester is : "<<x<<endl;
    cout<<"@ my degree in second semester is : "<<y<<endl;
    cout<<"*********************************"<<endl;
    it(x,y);
  

    return 0;
}