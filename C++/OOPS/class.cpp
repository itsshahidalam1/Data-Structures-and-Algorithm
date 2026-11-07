#include <iostream>
using namespace std;
class wocky
{
    int val;
    string name;

public:
    void in_name(int height, string me)
    {
        val = height;
        name = me;
    }

    void display()
    {
        cout << "Height is : " << val << endl;
        cout << "Name is : " << name << endl;
    }

} c1;

int main()
{
    c1.in_name(3, "wocky");
    c1.display();
    wocky t2;
    t2.display();
    return 0;
}