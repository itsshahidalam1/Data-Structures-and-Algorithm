#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n)
{
    int digitCount{0};
    int temp = n;
    while (temp > 0)
    {
        temp /= 10;
        digitCount++;
    }

    temp = n;

    int sum{0};
    while (temp > 0)
    {
        sum = sum + pow(temp % 10, digitCount);

        temp /= 10;
    }

    if (sum == n)
        return true;
    return false;
}

int main()
{
    int n;
    cin >> n;
    cout << isArmstrong(n);
}