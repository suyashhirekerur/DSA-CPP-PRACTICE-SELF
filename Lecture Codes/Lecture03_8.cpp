// Sum of odd numbers from 1 to n

#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int oddSum = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            oddSum += i;
        }
    }
    cout << oddSum;

    return 0;
}