#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void selectionSort(vector<int> &arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        int smallest = i;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[smallest])
            {
                smallest = j;
            }
        }

        swap(arr[i], arr[smallest]);
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

    selectionSort(arr, size);

    for (int val : arr)
    {
        cout << val << "\t";
    }
    cout << endl;

    return 0;
}