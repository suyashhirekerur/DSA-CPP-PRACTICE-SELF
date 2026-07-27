// Sum of numbers from 1 to n

#include <iostream>
using namespace std;

int main()
{
    int n = 50, sum = 0;

    // for (int i = 1; i <= n; i++)
    // {
    //     sum += i;
    // }
    int i = 1;
    while (i <= n)
    {
        sum += i;
        if (i == 5)
        {
            break;
        }
        i++;
    }

    cout << "sum = " << sum;

    return 0;
}