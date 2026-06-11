#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void bubbleSort(vector<int> &arr, int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        bool isSwapped = false;

        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwapped = true;
            }
        }

        if (!isSwapped)
            return;
    }
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

    bubbleSort(arr, size);

    for (int val : arr)
    {
        cout << val << "\t";
    }
    cout << endl;

    return 0;
}