#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define f(i, a, b) for (int i = a; i < b; i++)
#define rf(i, a, b) for (int i = a; i >= b; i--)

ll gcd(ll a, ll b)
{
    ll min = a;
    if (b < min)
        min = b;
    for (ll i = min; i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            return i;
        }
    }
}

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
    ll a[n];
    ll ct = 0;
    f(i, 0, n)
    {
        cin >> a[i];
        if (a[i] % 2 != 0)
            ct++;
    }
    if (ct % 2 == 0)
        cout << "YES" << endl;
    else
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