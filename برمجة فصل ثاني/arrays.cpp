#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "NOTE: After Finish Entering Ages, Click (-1)" << endl;
    cout << "Select the size of array YOU want (1-10): ";
    cin >> size;

    int ages[10] = {}; // مصفوفة ثابتة بحد أقصى 10
    int count = 0;     // متغير عشان نحسب كم رقم دخل فعلياً

    for (int i = 0; i < size; i++)
    {
        cout << "Enter Age for Index [" << i << "] = ";
        cin >> ages[i]; // بنخزن في الموقع i

        if (ages[i] == -1) // بنفحص إذا دخل -1
        {
            cout << "FINISH" << endl;
            break;
        }
        count++; // بنزيد العداد لو الرقم مش -1
    }

    cout << "The Number Of Elements Entered: " << count << endl;
    cout << "*******************" << endl;
    cout << "THE PROGRAM WAS ENDED!" << endl;

    return 0;
}
*******************************************************