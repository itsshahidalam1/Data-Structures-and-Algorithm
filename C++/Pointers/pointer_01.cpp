#include <iostream>
using namespace std;

int main()
{
    int a;

    int *p;
    p = &a;

    *p = 10;

    cout << a << endl;
    cout << &a << endl;
    cout << p << endl;
    cout << *p;

    return 0;
}