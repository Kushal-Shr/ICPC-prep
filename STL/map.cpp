#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<string, int> m;

    m["Sky"] = 84;
    m["Kushal"] = 91;
    m["Moon"] = 95;
    m["Shubhangi"] = 97;
    m["Scarlet"] = 94;

    for (auto p : m)
    {
        cout << p.first << ": " << p.second << endl;
    }

    return 0;
}