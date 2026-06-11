#include <bits/stdc++.h>

using namespace std;

int partition(vector<int> &vec, int st, int end)
{
    int idx = 0;

    for (int i = 0; i < end; i++)
    {
        if (vec[i] <= vec[end])
        {
            swap(vec[idx], vec[i]);
            idx++;
        }
    }

    swap(vec[idx], vec[end]);

    return idx;
}

void quickSort(vector<int> &vec, int st, int end)
{
    if (st >= end)
        return;

    int pivot = partition(vec, st, end);

    quickSort(vec, st, pivot - 1);
    quickSort(vec, pivot + 1, end);
}

int main()
{
    vector<int> vec = {5, 2, 6, 4, 1, 3};
    int n = vec.size();

    quickSort(vec, 0, n - 1);

    for (int n : vec)
        cout << n << " ";
    cout << endl;

    return 0;
}