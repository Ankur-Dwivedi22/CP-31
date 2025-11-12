#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define f(i, a, b) for (int i = a; i < b; i++)
#define rf(i, a, b) for (int i = a; i >= b; i--)
#define all(v) (v.begin(), v.end())

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
    long long n;
    cin >> n;
    if (n == 1 || n == 2)
    {
        cout << n << endl;
        return;
    }
    for (ll i = 2; i < n; i++)
    {
        if (n % i != 0)
        {
            cout << i - 1 << endl;
            return;
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