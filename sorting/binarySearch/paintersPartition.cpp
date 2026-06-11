#include <iostream>
#include <vector>

using namespace std;

bool isValid(vector<int> &arr, int mid, int numOfBoards, int numOfPainters)
{
    int painters = 1, length = 0;

    for (int i = 0; i < numOfBoards; i++)
    {
        if (arr[i] > mid)
            return false;

        if (length + arr[i] <= mid)
        {
            length += arr[i];
        }

        else
        {
            painters++;
            length = arr[i];
        }
    }

    return painters <= numOfPainters;
}

int partition(vector<int> &arr, int numOfBoards, int numOfPainters)
{
    int total = 0;

    for (int i = 0; i < numOfBoards; i++)
    {
        total += arr[i];
    }

    int start = 0, end = total;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (isValid(arr, mid, numOfBoards, numOfPainters))
        {
            ans = mid;
            end = mid - 1;
        }

        else
            start = mid + 1;
    }

    return ans;
}

int main()
{
    vector<int> arr = {40, 30, 10, 20};

    int numOfBoards = 4,
        numOfPainters = 2;

    int minTime = partition(arr, numOfBoards, numOfPainters);

    cout << "The minimum time to paint all boards is " << minTime << endl;

    return 0;
}