#include <iostream>
#include <vector>

using namespace std;

int main()
{
    pair<char, int> p = {'a', 1};
    cout << p.first << ": ";
    cout << p.second << endl;

    vector<pair<string, int>> vec = {{"bob", 2}, {"carl", 3}, {"don", 4}};

    for (pair<string, int> val : vec)
    {
        cout << val.first << ": ";
        cout << val.second << endl;
    }

    return 0;
}