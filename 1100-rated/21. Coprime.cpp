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

const int MAXN = 10000000;
std::bitset<MAXN + 1> is_prime;

void SieveOfEratosthenes()
{
    is_prime.set();
    is_prime[0] = is_prime[1] = 0;

    for (int p = 2; p * p <= MAXN; p++)
    {
        if (is_prime[p])
        {
            for (int i = p * p; i <= MAXN; i += p)
            {
                is_prime[i] = 0;
            }
        }
    }
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    ain(i, a, n);
    vector<int> ind(1001, 0);

    for (int i = 0; i < n; i++)
    {
        ind[a[i]] = i + 1;
    }
    int ans = -1;
    for (int i = 1; i <= 1000; i++)
    {
        if (ind[i] != 0)
        {
            for (int j = i; j <= 1000; j++)
            {
                if (ind[j] != 0)
                {
                    int v = gcd(i, j);
                    if (v == 1)
                    {
                        ans = max(ans, ind[i] + ind[j]);
                    }
                }
            }
        }
    }

    cout(ans);
}

int32_t main()
{
    Ankur_Dwivedi();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}