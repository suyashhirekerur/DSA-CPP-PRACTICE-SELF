// Kadane's Algorithm

#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};

    int maxSum = 0;
    for (int st = 0; st < n; st++)
    {
        int currSum = 0;
        for (int end = st; end < n; end++)
        {
            // for (int i = st; i <= end; i++)
            // {
            //     cout << arr[i];
            // }
            currSum += arr[end];
            maxSum = max(currSum, maxSum);
            // cout << " ";
        }
        // cout << endl;
    }

    cout << "max subarray sum is: " << maxSum << endl;

    return 0;
}