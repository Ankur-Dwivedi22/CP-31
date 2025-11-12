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
    int n, x, d;
    cin >> n;
    vector<int> v;
    f(i, 0, n)
    {
        cin >> x;
        d = abs(x - 0);
        v.push_back(d);
    }
    cout << *(min_element(v.begin(), v.end()));
}
int main()
{
    // ll t;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }

    solve();
}