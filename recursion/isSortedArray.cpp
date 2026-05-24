#include <iostream>
#include <vector>

using namespace std;

bool isSorted(vector<int> &v, int n)
{
    if (n == 1 || n == 0)
        return true;

    return v[n - 1] >= v[n - 2] && isSorted(v, n - 1);
}

int main()
{
    vector<int> vec = {1, 3, 4, 5, 6};
    int n = vec.size();

    cout << isSorted(vec, n);
    return 0;
}