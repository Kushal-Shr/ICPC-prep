#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container/hpp>

using namespace __gnu_pbds;
using namespace std;

#define int long long
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define ps(x, y) fixed << setprecision(y) << x
#define w(x)    \
    int x;      \
    cin >> x;   \
    while (x--) \
        ;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

void c_p_c()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin)
        freopen("output.txt", "w", stdout);
#endif
}

int main()
{
    c_p_c();

    return 0;
}