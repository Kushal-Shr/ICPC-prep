#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void insertionSort(vector<int> &arr, int size)
{
    for (int i = 1; i < size; i++)
    {
        int curr = arr[i],
            prev = i - 1;

        while (prev >= 0 && arr[prev] > curr)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }

        arr[prev + 1] = curr;
    }

    return;
}

int main()
{
    vector<int> arr = {4, 1, 5, 2, 3};
    int size = arr.size();

    for (int val : arr)
    {
        cout << val << "\t";
    }
    cout << endl;

    insertionSort(arr, size);

    for (int val : arr)
    {
        cout << val << "\t";
    }
    cout << endl;

    return 0;
}