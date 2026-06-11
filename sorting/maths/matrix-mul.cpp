#include <iostream>
#include <vector>

using namespace std;

struct Matrix
{
    int mat[2][2];
};

Matrix mul(const Matrix &A, const Matrix &B)
{
    Matrix C;

    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 2; col++)
        {
            int here = 0;
            for (int i = 0; i < 2; i++)
            {
                here += A.mat[row][i] * B.mat[i][col];
            }
            C.mat[row][col] = here;
        }
    }

    return C;
}

Matrix identity()
{
    Matrix A;
    A.mat[0][0] = 1, A.mat[0][1] = 0;
    A.mat[1][0] = 0, A.mat[1][1] = 1;

    return A;
}

Matrix power(const Matrix &A, int n)
{
    if (n == 0)
        return identity();

    Matrix X = power(A, n / 2);

    if (n % 2 == 0)
        return mul(X, X);
    else
        return mul(mul(X, X), A);
}

int main()
{
    Matrix A = {{{1, 2}, {3, 4}}};
    Matrix B = power(A, 3);

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << B.mat[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}