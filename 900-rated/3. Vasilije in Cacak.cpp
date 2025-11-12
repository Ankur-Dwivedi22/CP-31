#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define f(i, a, b) for (int i = a; i < b; i++)
#define rf(i, a, b) for (int i = a; i >= b; i--)
#define all(v) (v.begin(), v.end())

const int N = 1e9 + 7;

void solve()
{
    ll n, k, x;
    cin >> n >> k >> x;
    if (k > n)
    {
        cout << "NO" << endl;
        return;
    }
    ll mins = 0, maxs = 0;
    mins = k * (k + 1) / 2;
    maxs = (n * (n + 1) / 2) - ((n - k) * (n - k + 1) / 2);
    // for(int i=1; i<=k; i++){
    //     mins += i;
    // }
    // for(int i=n; i>=n-k+1; i--){
    //     maxs += i;
    // }
    if (x >= mins && x <= maxs)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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