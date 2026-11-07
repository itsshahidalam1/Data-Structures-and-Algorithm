#include <iostream>
using namespace std;

int main()
{
    char name[20];
    cout << "Enter name : ";

    cin.get(name, 50);

    operator<< (operator<<(cout,"Hello "), name) <<  endl;

    cin.ignore();

    char name2[20];
    cout << "Enter name again : ";

    cin.get(name2, 50);

    cout << "Hello " << name2 << endl;

    return 0;
}