#include <iostream>

using namespace std;

int main()
{
    int a = 6,
        b = 10;

    cout << (a & b) << endl;
    cout << (a | b) << endl;
    cout << (a ^ b) << endl;
    cout << (b << 2) << endl;
    cout << (b >> 1) << endl;

    return 0;
}