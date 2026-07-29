#include <iostream>
using namespace std;

int gcdRec(int a, int b)
{ // here we assume that 'a' is having largest number and 'b' is having smallest number
    if (b == 0)
        return a;

    return gcdRec(b, a % b);
}

int lcm(int a, int b)
{
    int gcd = gcdRec(a, b);
    return (a * b) / gcd;
}

int main()
{
    cout << lcm(20, 28) << endl;
    return 0;
}