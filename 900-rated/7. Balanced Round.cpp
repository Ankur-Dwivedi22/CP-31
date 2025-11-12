#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define f(i, a, b) for (int i = a; i < b; i++)
#define rf(i, a, b) for (int i = a; i >= b; i--)
#define all(v) (v.begin(), v.end())

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (auto &it : a)
    {
        cin >> it;
    }
    sort(a.begin(), a.end());
    ll maxe = 0, ct = 0;
    for (int i = 0; i < n - 1; i++)
    {
        maxe = max(maxe, ct);
        if (abs(a[i] - a[i + 1]) <= k)
        {
            ct++;
        }
        else
        {
            ct = 0;
        }
    }
    maxe = max(maxe, ct);
    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }
    cout << (n - (maxe + 1));
    cout << endl;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    // solve();
}