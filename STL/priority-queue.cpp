#include <iostream>
#include <queue>

using namespace std;

int main()
{
    priority_queue<int> pq;

    pq.emplace(1);
    pq.emplace(7);
    pq.emplace(5);
    pq.emplace(3);

    while (!pq.empty())
    {
        cout << pq.top() << endl;
        pq.pop();
    }

    return 0;
}