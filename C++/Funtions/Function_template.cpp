#include <iostream>
using namespace std;

template <class T>
T maxim(T a,T b);

int main()
{
    cout<<maxim(4.5,4.5);
   
    return 0;
}

template <class T>
T maxim(T a,T b)
{  cout<<a<<endl;
   if (a>b)
    return a;
   return b;
}