// Calculate sum of digits of a number

#include <iostream>
using namespace std;

int sumOfDigits(int num)
{
    int digitSum = 0;

    while (num > 0)
    {
        int lastDigit = num % 10; // Extracting the last digit
        num = num / 10;           // Dividing the new number formed after extracting the last digit by 10
        digitSum += lastDigit;
    }
    return digitSum;
}

int main()
{
    int num;

    cout << "Enter a number to calculate its sum of digits: ";
    cin >> num;

    cout << "Sum of all digits = " << sumOfDigits(num) << endl;

    return 0;
}