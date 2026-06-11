#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> q;

    q.emplace(1);
    q.emplace(2);
    q.emplace(3);
    q.emplace(4);
    q.emplace(5);
    q.emplace(6);

    cout << "Front: " << q.front() << endl;
    cout << "SIZE: " << q.size() << endl;

    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }

    cout << "SIZE: " << q.size() << endl;

    return 0;
}