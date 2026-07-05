// Arrays

#include <iostream>
using namespace std;

int main()
{
    // int marks[100];
    // double price[65];

    // double price[] = {8.99, 105.38, 30.00};
    int marks[5] = {99, 98, 54, 36, 72};

    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << marks[4] << endl;

    // 0 to size - 1
    cout << marks[-1] << endl; // Error

    cout << sizeof(marks) << endl;

    // To find out the array size
    cout << sizeof(marks) / sizeof(int) << endl;
    return 0;
}