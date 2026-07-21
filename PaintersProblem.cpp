// Painter's Partition Problem
// Given are N boards of length of each given in the form of array, and Mpainters, such that each painter takes 1 unit of time to paint 1 unit of the board.
// The task is to find the minimum time to paint all boards under the constraints that any painter will only paint continuous sections of boards
// As solution we need to find the minimum time to paint all the boards
// In the solution binary search is applied on possible solutions of answers not on arrays

#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> &arr, int n, int m, int maxAllowedTime) //O(n)
{
    int painters = 1, time = 0;

    for (int i = 0; i < n; i++)
    {
        if (time + arr[i] <= maxAllowedTime)
        {
            time += arr[i];
        }
        else
        {
            painters++;
            time = arr[i];
        }
    }

    return painters <= m;
}

int minTimeToPaint(vector<int> &arr, int n, int m)  // O(log(sum) * n)
{
    int sum = 0, maxVal = INT64_MIN;
    for (int i = 0; i < n; i++) //O(n)
    {
        sum += arr[i];
        maxVal = max(maxVal, arr[i]);
    }

    int st = maxVal, end = sum, ans = -1;

    while (st <= end)   
    {
        int mid = st + (end - st) / 2;

        if (isPossible(arr, n, m, mid))     //left
        {
            ans = mid;
            end = mid - 1;
        }
        else    //right
        {
            st = mid + 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> arr = {40, 30, 10, 20};
    int n = 4, m = 2;

    cout << minTimeToPaint(arr, n, m) << endl;
    return 0;
}