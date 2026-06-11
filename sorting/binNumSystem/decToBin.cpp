#include <iostream>

using namespace std;

int main()
{
    int decNum,
        tempDecNum,
        ans = 0,
        counter = 1;

    cout << "Enter your number: ";
    cin >> decNum;
    tempDecNum = decNum;

    while (tempDecNum > 0)
    {
        ans += counter * (tempDecNum % 2);
        tempDecNum = tempDecNum / 2;
        counter *= 10;
    }

    cout << "The binary of " << decNum << " is " << ans;

    return 0;
}