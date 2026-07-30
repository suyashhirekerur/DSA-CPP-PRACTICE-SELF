#include <iostream>
using namespace std;

int main()
{
    int matrix[4][3];
    int rows = 4;
    int cols = 3;

    // input loop
    for (int i = 0; i < rows; i++) // i = rows
    {
        for (int j = 0; j < cols; j++) // j = columns
        {
            cin >> matrix[i][j];
        }
        cout << endl;
    }

    // output loop
    for (int i = 0; i < rows; i++) // i = rows
    {
        for (int j = 0; j < cols; j++) // j = columns
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}