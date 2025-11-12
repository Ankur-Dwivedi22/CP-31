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
    int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;
    for (int i = 0; i <= 5; i++)
    {
        if (x.find(s) != string::npos)
        {
            cout << i << endl;
            return;
        }
        x += x;
    }
    cout << -1 << endl;
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