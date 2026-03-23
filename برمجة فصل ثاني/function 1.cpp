#include <iostream>
using namespace std;

int sum (int x, int y)
{


	return x+y;

}








int main ()
{


	cout<<sum(5,5)<<endl;
	cout<<sum(3,5)<<endl;
	cout<<sum(5,8)<<endl;
	cout<<sum(0,5)<<endl;




return 0;
}

ما بصير نستخدم طباعة جوا الدالة تبعت int ولازم نستخدم فيها return وجملة الطباعة بتكون تحت وإلا بنستخدم فويد

#include <iostream>
using namespace std;

void sum (int x, int y)
{

	cout <<"the sum is = "<<x+y<<endl;

}

int main ()
{

sum(5,5);
sum(3,5);
sum(5,8);



return 0;
}

*******************************************8

#include <iostream>
using namespace std;

int sum (int x, int y)
{

	cout <<"the sum is = "<<x+y<<endl;
return 0;
}

int main ()
{

sum(5,5);
sum(3,5);
sum(5,8);



return 0;
}

*******************************
جملة الطباعة بالفويد بتكون جوا الدالة وتحت منستدعيها بس
#include <iostream>
using namespace std;

void sum (int x, int y)
{

cout<<x+y<<endl;

}

int main ()
{


sum(5,5);



return 0;
}









