#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> st;

    st.emplace(1);
    st.emplace(2);
    st.emplace(3);
    st.emplace(4);
    st.emplace(5);

    cout << "Top: " << st.top() << endl;

    cout << "SIZE: " << st.size() << endl;

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    cout << "SIZE: " << st.size() << endl;

    return 0;
}