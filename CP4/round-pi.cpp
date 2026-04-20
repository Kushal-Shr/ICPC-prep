#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double pi = 22.0 / 7.0;
    int n;

    cin >> n;

    cout << fixed << setprecision(n) << pi << endl;
    return 0;
}