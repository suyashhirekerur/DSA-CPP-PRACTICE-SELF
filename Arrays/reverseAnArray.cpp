#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
    int start = 0, end = size - 1; 

    while (start < end) // For this also, the time complexity is going to be O(n)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;

    reverseArray(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}