#include <iostream>
using namespace std;

int countOddDigit(int n)
{
    if (n == 0)
        return 0;
    int temp, count{0};
      
    while (n > 0)
    {

        if ((n % 10)%2 != 0)
            count++;
            n /= 10;
    }
    return count;
}
int main()
{

    int n;
    cin >> n;
    cout << countOddDigit(n);
}