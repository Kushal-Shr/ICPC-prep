#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

#define int long long
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define ps(x, y) fixed << setprecision(y) << x

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

void i_c_p_c()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int findCeleb(vector<vector<int>> &arr)
{
    stack<int> st;
    int n = arr.size();

    for (int i = 0; i < n; i++)
        st.push(i);

    while (st.size() > 1)
    {
        int i = st.top();
        st.pop();
        int j = st.top();
        st.pop();

        if (arr[i][j] == 1)
            st.push(j);
        else
            st.push(i);
    }

    int celeb = st.top();
    st.pop();

    for (int i = 0; i < n; i++)
    {
        if (i != celeb && (arr[i][celeb] == 0 || arr[celeb][i] == 1))
            return 0;
    }

    return 1;
}

int32_t main()
{
    i_c_p_c();

    vector<vector<int>> people = {
        {1, 1, 0},
        {1, 0, 0},
        {0, 0, 0}};

    int ans = findCeleb(people);

    cout << ans << '\n';

    return 0;
}