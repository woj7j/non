#include <iostream>
using namespace std;
int main()
{
    cout << "\n\n\n\nWelcome In This Program:" << endl;
    cout << "This Program Will Give You Ability To Insert Values In Array and Add/Delete/Search On Array" << endl;
    int size = 88;
    string names[size] = {};
    cout << "\nEnter The Number Of Names You Want: ";
    cin >> size;
    cout << "\nEnter The Names You Want Store In Array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> names[i];
    }
    cout << "\n***Array Before Editing***" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << names[i] << " ";
    }
    cout << endl << endl;
    string element = "";
    int index = 0;
    cout << "Enter the element you want to add: ";
    cin >> element;
    cout << "Enter the index you want from 0-" << size << ": ";
    cin >> index;
    if (index > size)
    {
        cout << "Invaled Number!";
    }
    else
    {
        for (int i = size; i > index; i--)
        {
            names[i] = names[i - 1];
        }
        names[index] = element;
        size++;
    }
    cout << "***Array after add***:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << names[i] << " ";
    }
    cout<<"\n***********************************"<<endl;
    int x;
    cout << "\nIf you want delete element enter 0 if not want enter 1: ";
    cin >> x;
    if (x == 0)
    {
        cout << "\nEnter the element you want delete: ";
        cin >> element;
        for (int i = 0; i < size; i++)
        {
            if (element == names[i])
                index = i;
        }
        for (int i = index; i < size; i++)
        {
            names[i] = names[i + 1];
        }
        size--;
        cout << "***Array after deleting***: ";
        for (int i = 0; i < size; i++)
        {
            cout << names[i] << " ";
        }
    }
    else
    {
        cout << "Finished Program."<<endl;
    }
    cout<<"\n***********************************"<<endl;
    int y;
    cout << "\nIf you want to search on array click on 2 if not click on 3: ";
    cin >> y;
    if (y == 2)
    {
        int founded;
        cout << "Enter the element you want search on: ";
        cin >> element;
        for (int i = 0; i < size; i++)
        {
            if (element == names[i])
            {
                index = i;
                founded = 1;
            }
        }
        if (founded == 1)
        {
            cout << "*The element is founded! " << endl;
            cout << "*The index of number: " << index << endl;
        }
        else
        {
            cout << "Not Founded.";
        }
    }
    else
    {
        cout << "Finished Program.";
    }

    return 0;
}