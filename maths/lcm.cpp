#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    if (a > b)
        return gcd(a % b, b);
    else
        return gcd(a, b % a);
}

int main()
{
    int a, b;
    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    int ans = (a * b) / gcd(a, b);
    cout << "\nThe LCM of " << a << " and " << b << " is: " << ans << endl;

    return 0;
}