// HARE RAM HARE KRISHNA

#include <bits/stdc++.h>
using namespace std;
#define int long long
const double PI = 3.14159265358979323846;
#define INF (int)1e18
#define f first
#define s second
#define pb(a) push_back(a)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define Ankur_Dwivedi()                   \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(0);                       \
        cout.tie(0);                      \
    }

#define couty cout << "YES" << endl
#define coutn cout << "NO" << endl
#define cout(a) cout << a << endl

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
        cout << arr[i] << " ";  \
    }

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

string binary(int x)
{
    string s = "";
    for (int i = 31; i >= 0; i--)
    {
        int a = ((x >> i) & 1);
        if (a == 1)
        {
            s += '1';
        }
        else
        {
            s += '0';
        }
    }
    return s;
}

bool SieveOfEratosthenes(int n)
{

    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++)
    {

        if (prime[p] == true)
        {

            for (int i = p * p; i <= n; i += p)
            {
                prime[i] = false;
            }
        }
    }

    if (prime[n])
    {
        return true;
    }
    else
    {
        return false;
    }
}

int ct0(string s)
{
    int ct = 0;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == '0')
            ct++;
        else
            break;
    }
    return ct;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<string> a(n);
    vector<int> len(n, 0), zeros(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        len[i] = a[i].size();
        zeros[i] = ct0(a[i]);
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += (len[i] - zeros[i]);
    }
    sort(rall(zeros));

    for (int i = 0; i < n; i++)
    {
        if (i & 1)
        {
            ans += zeros[i];
        }
    }
    if (ans - 1 >= m)
    {
        cout("Sasha");
    }
    else
    {
        cout("Anna");
    }
}

int32_t main()
{
    Ankur_Dwivedi();
    int t;
    cin >> t;
    while (t--)
        solve();
    // solve();
    return 0;
}