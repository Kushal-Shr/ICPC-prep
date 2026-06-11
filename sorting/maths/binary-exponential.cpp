#include <iostream>

using namespace std;

int pow(int a, int b)
{
    if (b == 1)
        return a;

    int X = pow(a, b / 2);

    if (b % 2 == 0)
        return X * X;
    else
        return a * X * X;
}

int main()
{
    int base, power;
    cin >> base >> power;

    cout << pow(base, power);

    return 0;
}