// HARE RAM HARE KRISHNA

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define INF (int)1e18
#define f first
#define s second
#define readyplayerone()                  \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(0);                       \
        cout.tie(0);                      \
    }

#define couty cout << "YES" << endl
#define coutn cout << "NO" << endl
#define cout(a) cout << a << endl

#define min3(a, b, c) (a < b && a < c) ? a : (b < c) ? b \
                                                     : c
#define max3(a, b, c) (a > b && a > c) ? a : (b > c) ? b \
                                                     : c

#define fi(i, s, e) for (int i = s; i < e; i++)
#define fd(i, s, e) for (int i = s; i > e; i--)

#define ain(i, arr, n)          \
    ;                           \
    for (int i = 0; i < n; i++) \
    {                           \
        cin >> arr[i];          \
    }
#define aout(i, arr, n)         \
    ;                           \
    for (int i = 0; i < n; i++) \
    {                           \
        cout << arr[i] << "\t"; \
    }

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void solve()
{
    int n;
    cin >> n;
    if (n > 10)
    {
        string s = to_string(n);
        int ct = s.length() - 1;
        string div = "";
        div += '1';
        for (int i = 1; i <= ct; i++)
        {
            div += '0';
        }
        int d = stoi(div);
        int ans = (n / d) + (ct - 1) * 9 + 9;
        cout(ans);
    }
    else
    {
        cout(n);
    }
}

int32_t main()
{
    readyplayerone();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    // solve();
}