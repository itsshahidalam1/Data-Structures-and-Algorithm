#include <iostream>
using namespace std;

int largestDigit(int n)
{  
   if (n==0) return 0;
   int largest {0};
   while(n>0)
   { 
    int temp = n%10;
     if( temp > largest) largest = temp;
     n/=10;
   }
   return largest;
}
int main()
{

    int n;
    cin >> n;
    cout << largestDigit(n);
}