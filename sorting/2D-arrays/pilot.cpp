#include <iostream>

using namespace std;

int main()
{
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};

    int rows = 3;
    int cols = 4;

    cout << "Data in row1, col1: " << matrix[0][0] << endl;

    cout << "Matrix: " << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}