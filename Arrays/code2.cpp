// Loops in Arrays

#include <iostream>
using namespace std;

int main()
{
    // int marks[5] = {99, 98, 54, 36, 72};
    // int size = 5;

    // // Loops : 0 to size-1
    // for (int i = 0; i < size; i++)
    // {
    //     cout << marks[i] << endl;
    // }

    int size = 5;
    int marks[size];
    
    for (int i = 0; i < size; i++)
    {
        cin >> marks[i];
    }
    
    for (int i = 0; i < size; i++)
    {
        cout << marks[i] << endl;
    }

    return 0;
}