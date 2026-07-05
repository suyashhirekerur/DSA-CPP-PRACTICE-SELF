#include <iostream>
using namespace std;

// int printHello()
// {
//     cout << "hello\n";
//     return 3;
// }

int sum(double a, double b) // parameters
{
    int s = a + b;
    return s;
}

int main()
{
    // function call / invoke
    // printHello();
    // printHello();
    // printHello();
    // printHello();
    // printHello();
    // printHello();
    // printHello();
    // printHello();

    // int val = printHello();
    // cout << printHello() << endl;

    cout << sum(10, 7)  << endl; //10 and 7 are arguments
    return 0;
}