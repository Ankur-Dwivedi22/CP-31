#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define f(i, a, b) for (int i = a; i < b; i++)
#define rf(i, a, b) for (int i = a; i >= b; i--)
#define all(v) (v.begin(), v.end())

const int X = 1e6 + 1;

bool prime(int n)
{
    if (n == 0 || n == 1)
    {
        return false;
    }
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 1, cur = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i] != s[i - 1])
        {
            cur = 1;
        }
        else
        {
            cur++;
        }
        ans = max(ans, cur);
    }
    cout << ans + 1 << endl;
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