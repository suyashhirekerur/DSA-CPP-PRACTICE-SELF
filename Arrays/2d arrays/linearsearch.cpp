#include <iostream>
using namespace std;

// We must specify the column as compiler needs this info to access the elements of 2d array correctly.
bool linearSearch(int mat[][3], int rows, int cols, int key)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (mat[i][j] == key)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int matrix[4][3];
    int rows = 4;
    int cols = 3;

    cout << linearSearch(matrix, rows, cols, 4) << endl;
    return 0;
}