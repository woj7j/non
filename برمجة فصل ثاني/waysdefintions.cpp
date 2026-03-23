#include <iostream>
using namespace std;
class Jordan
{
private:
    int x;
    int y;

public:
    Jordan();
    ~Jordan()
    {
        cout << "\nhello im here !" << endl;
    }
    void maan();
};
Jordan::Jordan()
{
    x = 50;
    y = 50;
}
void Jordan::maan()
{
    cout << x + y << endl;
}
int main()
{
    Jordan ob1;
    ob1.maan();
    ob1.~Jordan();
    return 0;
}