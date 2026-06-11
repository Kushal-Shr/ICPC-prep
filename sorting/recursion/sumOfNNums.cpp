#include <iostream>

using namespace std;

int sum(int n)
{
    if (n == 1)
        return n;

    return n + sum(n - 1);
}

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;

    cout << "Sum: " << sum(num) << endl;
    return 0;
}