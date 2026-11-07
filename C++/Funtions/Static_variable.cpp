#include <iostream>
using namespace std;

int fun()
{
    int static x;
    x++;
    cout<<x<<endl;

}

int main()
{
   fun();
   fun();

    return 0 ;
}