#include <iostream> //over loaadinggggggggg
using namespace std;
void za()
// لازم نغير عدد التايب لو من نفس النوع أو بنغير نوع تايب في كل فنكشن
//لازم ضروري جدا لو كان التايب نفس النوع لازم نغير العدد تبعه وإذا كان
// من غير نوع الكود رح يشتغل بس رح يطلع الفنكشن الأولاني/ 
//باختصار شدييد لازم إنه عدد المتغيرات يكون مختلف وفي حال كتابة ف
//نكشن له تايب متغير بس العدد نفسه مش رح يطبع إيرور 
//السترنق عادي بطبع حتى لو نفس العدد لإنه متغير مختلف 
{
    cout<<"Zaina Abdallah Alfanatsa"<<endl;
    cout<<"AI Engineer"<<endl;
}
void za(int a, int b)
{
cout<<"first = "<<a<<b<<endl;
}
void za(float a, float b)
{
cout<<"the second = "<<a<<"  "<<b<<endl;
}
void za(string a)
{
cout<<"the third = "<<a<<endl;
}
void za(double a, double b)
{
cout<<"the forth = "<<a<<"  "<<b<<endl;
}
int main()
{
   
za(5,7);
za(7.9999f,98.0988f);
za(9.344444444444,54.887484);
za("maan jordan");
    return 0;
}
//الأرقام العشرية بدون f نوعها الافتراضي double
//بزبط نحط نفس العدد بس نوع مختلف وما ننسى الكومبايلر بقرأ الدوب
//ل فلو الفنكشن فلوت ودخلنا دبل بنحوله لفلوت
*********************************************
#include <iostream>
using namespace std;
class Study
{
private:
	string name;
	int hours;
	string colleage;
	int student;

public:
	void setValue(string n, string coll);
	void setValue(int st)
	{
		student = st;
		cout << "how much student in University? " << student << endl;
	}
};
void Study::setValue(string n, string coll)
{
	name = n;
	colleage = coll;
	cout << "the name of university: " << name << endl;
	cout << "the name of colleage: " << colleage << endl;
}
int main()
{
	Study ob1;
	ob1.setValue("aqaba university", "IT");
	ob1.setValue(400);

	return 0;
}


