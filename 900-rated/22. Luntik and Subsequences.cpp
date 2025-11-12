// HARE RAM HARE KRISHNA

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define readyplayerone()                  \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(0);                       \
        cout.tie(0);                      \
    }

void solve()
{
    int n;
    cin >> n;
    int ct0 = 0, ct1 = 0, x;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (x == 0)
            ct0++;
        if (x == 1)
            ct1++;
    }
    cout << (1LL << ct0) * (1LL) * ct1 << "\n";
}

int32_t main()
{
    readyplayerone();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    // solve();
}