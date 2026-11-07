// Pointer arithmetics

#include <iostream>
using namespace std;

int main()
{
    int *p,*q,*r;
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
    
    cout<<endl;
    
    // Only five arithmetic operations are meaningful

    q = p;
    r = &p[4];
    
    cout<<p<<"   "<<*p<<endl;
    cout<<q+2<<"   " <<*(q+2)<<endl;
    cout<<q-r<<"   " <<endl;
    cout<<r-q<<endl;;


    


    return 0;
}