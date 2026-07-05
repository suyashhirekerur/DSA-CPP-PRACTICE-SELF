#include <iostream>
using namespace std;

int main()
{
    bool isPrime = true;
    int n = 14;
    for (int i = 2; /*i <= n - 1 OR*/ i * i <= n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime == true)
    {
        cout << "Prime";
    }
    else
    {
        cout << "Non - prime";
    }
        

    return 0;
}