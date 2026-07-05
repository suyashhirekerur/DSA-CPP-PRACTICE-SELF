#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i; // indicates element found
        }
    }
    return -1; // indicates element not found
}

int main()
{
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = 7;

    int target;
    cout << "Enter the element you want to find : ";
    cin >> target;

    cout << linearSearch(arr, size, target) << endl;
    return 0;
}