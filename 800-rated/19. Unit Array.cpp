// HARE RAM HARE KRISHNA

#include <bits/stdc++.h>
using namespace std;
#define int long long
const double PI = 3.14159265358979323846;
#define INF (int)1e18
#define f first
#define s second
#define pb(a) push_back(a)
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
    vector<int> a(n);
    ain(i, a, n);
    int ctn = 0, ctp = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == -1)
        {
            ctn++;
        }
        else
        {
            ctp++;
        }
    }
    int op = 0;
    while ((ctp - ctn < 0))
    {
        ctn--;
        ctp++;
        op++;
    }
    if (ctn % 2)
        cout(op + 1);
    else
        cout(op);
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