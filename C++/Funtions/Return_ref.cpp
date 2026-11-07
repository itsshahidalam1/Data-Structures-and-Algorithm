#include <iostream>
using namespace std;



int &fun(int a)
{
   cout<<a<<endl;
   int *ptr;
   ptr = new int;
   *ptr = a;
   return *ptr;
}


int main()
{
   int x;
   int y = fun(3);  
//fun(2) = 5;  this is an important syntax of cpp, here function call act as a reference to the variable.
    cout<<y<<endl;
    return 0;
}