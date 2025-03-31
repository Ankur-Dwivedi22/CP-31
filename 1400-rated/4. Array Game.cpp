// HARE RAM HARE KRISHNA

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define INF 1e18
#define PI 3.14159265358979323846
#define MOD 1e9 + 7
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define f first
#define s second
#define debug(x) cerr << #x << " = " << x << endl;

#define ain(i, arr, n)          \
    for (int i = 0; i < n; i++) \
    cin >> arr[i]
#define aout(i, arr, n)         \
    for (int i = 0; i < n; i++) \
        cout << arr[i] << " ";  \
    cout << endl
#define couty cout << "YES" << endl
#define coutn cout << "NO" << endl
#define cout(a) cout << a << endl
#define loop(i, a, b) for (int i = a; i < b; i++)  // Forward loop
#define loopr(i, a, b) for (int i = a; i > b; i--) // Reverse loop
#define each(x, v) for (auto &x : v)               // Iterate over a container

#define Ankur_Dwivedi()                   \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(0);                       \
        cout.tie(0);                      \
    }

class DisjointSet
{
public:
    vector<int> parent, rank, size;

    DisjointSet(int n)
    {
        parent.resize(n);
        rank.assign(n, 0);
        size.assign(n, 1);
        iota(parent.begin(), parent.end(), 0);
    }

    int find(int x)
    {
        return parent[x] == x ? x : (parent[x] = find(parent[x]));
    }

    void unionByRank(int u, int v)
    {
        int pu = find(u), pv = find(v);
        if (pu == pv)
            return;

        if (rank[pu] < rank[pv])
            parent[pu] = pv;
        else if (rank[pu] > rank[pv])
            parent[pv] = pu;
        else
        {
            parent[pu] = pv;
            rank[pv]++;
        }
    }

    void unionBySize(int u, int v)
    {
        int pu = find(u), pv = find(v);
        if (pu == pv)
            return;

        if (size[pu] < size[pv])
        {
            parent[pu] = pv;
            size[pv] += size[pu];
        }
        else
        {
            parent[pv] = pu;
            size[pu] += size[pv];
        }
    }
};

#define gcd __gcd

int modExp(int base, int exp, int mod = MOD)
{
    int res = 1;
    while (exp > 0)
    {
        if (exp & 1)
            res = (res * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return res;
}

const int N = 1e7;
vector<bool> is_prime(N + 1, true);

void sieve()
{
    is_prime[0] = is_prime[1] = false;
    for (int p = 2; p * p <= N; p++)
    {
        if (is_prime[p])
        {
            for (int i = p * p; i <= N; i += p)
                is_prime[i] = false;
        }
    }
}

string toBinary(int x)
{
    string s = "";
    while (x)
    {
        s += (x & 1) ? '1' : '0';
        x >>= 1;
    }
    reverse(s.begin(), s.end());
    return s.empty() ? "0" : s;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    ain(i, a, n);
    if (k >= 3)
    {
        cout(0);
        return;
    }
    sort(all(a));
    int d = a[0];
    for (int i = 0; i < n - 1; i++)
    {
        d = min(d, a[i + 1] - a[i]);
    }
    if (k == 1)
    {
        cout(d);
        return;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            int v = a[i] - a[j];
            int ind = lower_bound(all(a), v) - a.begin();
            if (ind < n)
                d = min(d, a[ind] - v);
            if (ind > 0)
                d = min(d, v - a[ind - 1]);
        }
    }
    cout(d);
}

int32_t main()
{
    Ankur_Dwivedi();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
