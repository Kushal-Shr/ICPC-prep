#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isValid(vector<int> &arr, int mid, int numOfStudents, int numValues)
{
    int student = 1,
        pages = 0;

    for (int i = 0; i < numValues; i++)
    {
        if (arr[i] > mid)
            return false;

        if (pages + arr[i] <= mid)
        {
            pages += arr[i];
        }
        else
        {
            student++;
            pages = arr[i];
        }
    }

    return student <= numOfStudents;
}

int sum(vector<int> &arr)
{
    int total = 0;

    for (int val : arr)
    {
        total += val;
    }

    return total;
}

int main()
{
    vector<int> arr = {2, 1, 3, 4};

    int numOfStudents = 2;

    int numValues = 4,
        st = 0,
        end = sum(arr),
        ans = -1;
    int mid;

    while (st <= end)
    {
        mid = st + (end - st) / 2;

        if (isValid(arr, mid, numOfStudents, numValues))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }

    cout << ans << endl;

    return 0;
}