#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define f(i, a, b) for (int i = a; i < b; i++)
#define rf(i, a, b) for (int i = a; i >= b; i--)
#define all(v) sort(v.begin(), v.end())

const int X = 1e6 + 1;

// bool prime(int n)
// {
//     if (n == 0 || n == 1)
//     {
//         return false;
//     }
//     for (int i = 2; i <= n / 2; i++)
//     {
//         if (n % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }

void solve()
{
    int n;
    cin >> n;
    int res = 0;
    f(i, 0, n)
    {
        int x;
        cin >> x;
        res ^= x;
    }
    if (res == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        if (n & 1)
        {
            cout << res << endl;
        }
        else
        {
            cout << -1 << endl;
        }
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