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

const int m = 1e9 + 7;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    map<int,int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
    sort(v.begin(), v.end());
    int u = unique(v.begin(), v.end()) - v.begin();
    if (u == 1)
    {
        cout << "YES" << endl;
    }
    else if (u == 2)
    {
        int b = 0, c = 0;
        for (auto it : mp)
        {
            if (n & 1)
            {
                if (it.second == (n / 2 + 1))
                    b = 1;
                else if (it.second == n / 2)
                    c = 1;
            }
            else
            {
                if (it.second == (n / 2))
                {
                    b = 1;
                    c = 1;
                }
            }
        }
        if (b & c)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
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