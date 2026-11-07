#include <iostream>
using namespace std;

int main()
{
    int *p;
    int size;
    cout << "Enter array size :";
    cin >> size;

    p = new int[size];

    cout << "Enter elements" << endl;

    for (int i = 0; i < size; i++)
        cin >> p[i];

    cout << "The elements of the array are : ";
    for (int i = 0; i < size; i++)
        cout << p[i] << " ";

    delete[] p;

    cout <<endl<< "Enter new size :";
    cin >> size;

    p = new int[size]{}; 


    cout << "The elements of the new array are : ";
    for (int i = 0; i < size; i++)
        cout << p[i] << " ";

    return 0;
}