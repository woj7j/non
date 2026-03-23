#include <iostream>
using namespace std;
void zozo(int z, int a, int m)
{
	if (z > a && z > m)
	{
		cout << "the max is = " << z << endl;
	}
	else if (a > z && a > m)
	{
		cout << "the max is = " << a << endl;
	}
	else
	{
		cout << "the max is = " << m << endl;
	}
}

int main()
{


	int x, y, m;
	cin >> x;
	cin >> y;
	cin >> m;
	zozo(x, y, m);



	return 0;
}
*****************************************************
#include <iostream>
using namespace std;
int zozo(int z, int a, int m)
{
	if (z > a && z > m)
	{
		cout << "the max is = " << z << endl;
	}
	else if (a > z && a > m)
	{
		cout << "the max is = " << a << endl;
	}
	else
	{
		cout << "the max is = " << m << endl;
	}
	return 0;
}

int main()
{


	int x, y, m;
	cin >> x;
	cin >> y;
	cin >> m;
	zozo(x, y, m);



	return 0;
}
********************************************************
#include <iostream>
using namespace std;
int zozo(int z, int a, int m)
{
	if (z > a && z > m)
	{
     return z;
	}
	else if (a > z && a > m)
	{
	 return a;
	}
	else
	{
	 return m;
	}
}

int main()
{


	int x, y, m;
	cin >> x;
	cin >> y;
	cin >> m;
	cout <<"the max number is = "<<zozo(x,y,m)<<endl;



	return 0;
}