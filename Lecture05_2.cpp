// Calculate the sum from 1 to N by using functions

#include <iostream>
using namespace std;

int sumN(int n)
{
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    return sum;
}

int main()
{
    cout << sumN(9496);

    return 0;
}