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
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n & 1)
    {
        cout << 4 << endl;
        cout << 1 << " " << n - 1 << endl;
        cout << 1 << " " << n - 1 << endl;

        cout << n - 1 << " " << n << endl;
        cout << n - 1 << " " << n << endl;
    }
    else
    {
        cout << 2 << endl;
        cout << 1 << " " << n;
        cout << endl;
        cout << 1 << " " << n;
        cout << endl;
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