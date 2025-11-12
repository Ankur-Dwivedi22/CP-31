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
    if (n % 3 == 0)
    {
        cout << "Second\n";
    }
    else
    {
        cout << "First\n";
    }
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