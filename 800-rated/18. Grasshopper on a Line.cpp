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
    int x, k;
    cin >> x >> k;
    if (x % k == 0)
    {
        cout << 2 << endl;
        cout << x - 1 << " " << 1 << endl;
    }
    else
    {
        cout << 1 << endl;
        cout << x << endl;
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