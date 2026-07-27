// Converting decimal number into a binary

#include <iostream>
using namespace std;

int decToBinary(int decNum)
{
    int ans = 0, pow = 1;

    while (decNum > 0)
    {
        int rem = decNum % 2;
        decNum /= 2;

        ans += (rem * pow);
        pow *= 10;
    }

    return ans;
}

int main()
{
    int num;

    cout << "Enter a  decimal (base 10) number to convert it into binary form: ";
    cin >> num;

    cout << "The binary form of entered decimal number is " << decToBinary(num) << endl;

    return 0;
}