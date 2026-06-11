#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> mul1(const vector<vector<int>> &A, const vector<vector<int>> &B)
{
    vector<vector<int>> C(2, vector<int>(2, 0));

    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 2; col++)
        {
            for (int i = 0; i < 2; i++)
            {
                C[row][col] += A[row][i] * B[i][col];
            }
        }
    }

    return C;
}

vector<int> mul2(const vector<vector<int>> &A, const vector<int> &B)
{
    vector<int> C(2, 0);

    C[0] = (A[0][0] * B[0]) + (A[0][1] * B[1]);
    C[1] = (A[1][0] * B[0]) + (A[1][1] * B[1]);

    return C;
}

vector<vector<int>> identity()
{
    return {{1, 0}, {0, 1}};
}

vector<vector<int>> power(const vector<vector<int>> &A, int n)
{
    if (n == 0)
        return identity();

    vector<vector<int>> X = power(A, n / 2);

    if (n % 2 == 0)
        return mul1(X, X);
    else
        return mul1(mul1(X, X), A);
}

int main()
{
    int n;
    cin >> n;

    if (n == 1)
        cout << 0 << endl;
    else if (n == 2)
        cout << 1 << endl;

    else
    {
        vector<vector<int>> a = {{0, 1}, {1, 1}};
        vector<int> firstV = {0, 1};

        vector<int> res = mul2(power(a, n - 2), firstV);

        cout << res[1] << endl;
    }

    return 0;
}