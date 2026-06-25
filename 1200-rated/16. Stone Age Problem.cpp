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
    }                           \
    cout << endl;

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

const int M = 1e9 + 7;

int power(int b, int e)
{
    b = (b % M);
    int ans = 1;
    while (e > 0)
    {
        if (e % 2 == 1)
        {
            ans = (ans * b) % M;
        }
        b = (b * b) % M;
        e /= 2;
    }

    return ans;
}

int modInverse(int n)
{
    return power(n, M - 2);
}

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    int sum = 0;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        v.push_back({a[i], 0});
    }
    int val = -1, time = -1;
    int tm = 1;
    while (q--)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            int i, x;
            cin >> i >> x;
            if (v[i - 1].second < time)
            {
                sum -= val;
                sum += x;
                v[i - 1] = {x, tm};
            }
            else
            {
                sum -= v[i - 1].first;
                sum += x;
                v[i - 1] = {x, tm};
            }
        }
        else
        {
            int x;
            cin >> x;
            sum = n * x;
            val = x;
            time = tm;
        }
        cout(sum);
        tm++;
    }
}

int32_t main()
{
    Ankur_Dwivedi();
    int t;
    // cin >> t;
    t = 1;
    while (t--)
        solve();
    return 0;
}