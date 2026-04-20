#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double num;
    cout << "Enter the number: ";
    cin >> num;

    cout << fixed << setprecision(3) << setw(7) << right << num << endl;

    return 0;
}