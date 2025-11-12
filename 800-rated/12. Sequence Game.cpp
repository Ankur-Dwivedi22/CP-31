#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define f(i, a, b) for (int i = a; i < b; i++)
#define rf(i, a, b) for (int i = a; i >= b; i--)
#define all(v) sort(v.begin(), v.end())

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
    ll n;
    cin >> n;
    vector<ll> b, a;

    f(i, 0, n)
    {
        ll x;
        cin >> x;
        b.push_back(x);
        if (i == 0 || b[i] >= b[i - 1])
        {
            a.push_back(b[i]);
        }
        else
        {
            a.push_back(b[i]);
            a.push_back(b[i]);
        }
    }
    cout << a.size() << endl;
    f(i, 0, a.size())
    {
        cout << a[i] << " ";
    }
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