// Calculate binary to decimal

#include <bits/stdc++.h>
using namespace std;

int binToDecimal(int binNum)
{
    int ans = 0, pow = 1;

    while (binNum > 0)
    {
        int rem = binNum % 10;
        ans += rem * pow;

        binNum /= 10;
        pow *= 2;
    }
    return ans; // decimal form
}

int main()
{

    int num;

    cout << "Enter a binary form (base 10) number to convert it into decimal number form: ";
    cin >> num;

    cout << "The binary form of entered decimal number is " << binToDecimal(num) << endl;
    return 0;
}