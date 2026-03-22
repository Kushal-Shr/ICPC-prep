#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    bool isPowerOf2 = (n > 0) && ((n & (n - 1)) == 0);

    cout << isPowerOf2;

    return 0;
}