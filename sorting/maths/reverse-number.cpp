#include <iostream>

using namespace std;

void reverse_num(int &num)
{
    int ans = 0;

    int i = 0;

    while (num > 0)
    {
        ans = (ans * 10) + (num % 10);
        num /= 10;
        i++;
    }

    num = ans;
}

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;

    reverse_num(num);

    cout << num;

    return 0;
}