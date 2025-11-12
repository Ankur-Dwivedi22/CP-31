// HARE RAM HARE KRISHNA

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define readyplayerone()                  \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(0);                       \
        cout.tie(0);                      \
    }

int32_t main()
{
    readyplayerone();
    int t;
    cin >> t;
    while (t--)
    {
        int n, res = 0;
        cin >> n;
        vector<int> p(n), d(n);
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
            d[i] = abs(p[i] - i - 1);
            res = __gcd(res, d[i]);
        }
        cout << res << endl;
    }
}