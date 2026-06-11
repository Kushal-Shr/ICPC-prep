#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> &v, int t, int st, int end)
{
    int mid = st + (end - st) / 2;

    if (st <= end)
    {
        if (t == v[mid])
            return mid;
        else if (t < v[mid])
            return binarySearch(v, t, st, mid - 1);
        else if (t > v[mid])
            return binarySearch(v, t, mid + 1, end);
    }

    return -1;
}

int main()
{
    int target = 1;
    vector<int> vec = {2, 5, 6, 8, 10, 11};
    int n = vec.size();

    cout << target << " is in the position: " << binarySearch(vec, target, 0, n - 1) << endl;

    return 0;
}