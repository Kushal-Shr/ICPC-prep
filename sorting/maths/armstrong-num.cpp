#include <iostream>
#include <cmath>

using namespace std;

bool isArmstrong(int num)
{
    int cpy = num;
    int sumOfNum = 0;

    while (cpy > 0)
    {
        sumOfNum += pow((cpy % 10), 3);
        cpy /= 10;
    }

    return (num == sumOfNum);
}

int main()
{
    int a;
    cout << "Enter the number: ";
    cin >> a;

    if (isArmstrong(a))
        cout << "YES, it is armstrong" << endl;
    else
        cout << "NO, it's not armstrong" << endl;
    return 0;
}