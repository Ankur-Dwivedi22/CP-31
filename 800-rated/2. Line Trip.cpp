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
    int n, x;
    cin >> n >> x;
    vector<int> v(n), d;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    // if(n == 1){
    //     int maxe = max(v[0],2*(x - v[0] ));
    //     cout<<maxe<<endl;
    //     return;
    // }
    for (int i = 1; i < n; i++)
    {
        d.push_back(v[i] - v[i - 1]);
    }
    d.push_back(v[0]);
    d.push_back(2 * (x - v[n - 1]));
    sort(d.begin(), d.end());
    cout << d[d.size() - 1] << endl;
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