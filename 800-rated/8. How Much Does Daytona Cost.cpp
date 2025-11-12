#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define f(i, a, b) for (int i = a; i < b; i++)
#define rf(i, a, b) for (int i = a; i >= b; i--)
#define all(v) (v.begin(), v.end())

const int N = 1e9 + 7;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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