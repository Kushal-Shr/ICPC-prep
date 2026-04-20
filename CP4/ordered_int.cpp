#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> s;

    int n;

    cin >> n;

    int a;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        s.emplace(a);
    }

    for (int val : s)
    {
        cout << val << " ";
    }

    return 0;
}