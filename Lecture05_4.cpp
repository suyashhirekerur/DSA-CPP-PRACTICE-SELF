// Pass by value - passing the value from a function
// Pass by Reference - passing ther original value, uses the concept of pointers

// Pass by value - Program
#include <iostream>
using namespace std;

// int sum(int a, int b)
// {
//     a = a + 10;
//     b = b + 10;
//     return a + b;
// }

int changeX(int x) {
    x=2*x;  
    changeX(x);
}

int main()
{
    // int a = 5, b = 4;
    // cout << sum(a, b) << endl;

    // // Here a and b values are which are initialized in the main function
    // cout << a << endl;
    // cout << b << endl;

    //changeX function
    int x = 5;
    changeX(x);

    cout << "x = " << x << endl;
    return 0;
}