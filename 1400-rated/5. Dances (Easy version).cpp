// HARE RAM HARE KRISHNA
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const double PI = 3.14159265358979323846;
#define INF (int)1e18
#define f first
#define s second
#define pii pair<int, int>
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
    for (int i = 0; i < n; i++) \
        cout << arr[i] << " ";  \
    cout << endl

using namespace std;

class DisjointSet
{
public:
    vector<int> parent, rank, size;

    DisjointSet(int n)
    {
        parent.resize(n);
        rank.resize(n);
        size.resize(n);

        for (int i = 0; i < n; i++)
        {
            parent[i] = i;
            rank[i] = 0;
            size[i] = 1;
        }
    }

    int find(int x)
    {
        if (parent[x] == x)
            return x;
        return parent[x] = find(parent[x]);
    }

    void unionByRank(int u, int v)
    {
        int ulp_u = find(u);
        int ulp_v = find(v);

        if (ulp_u == ulp_v)
            return;

        if (rank[ulp_u] < rank[ulp_v])
        {
            parent[ulp_u] = ulp_v;
        }
        else if (rank[ulp_v] < rank[ulp_u])
        {
            parent[ulp_v] = ulp_u;
        }
        else
        {
            parent[ulp_u] = ulp_v;
            rank[ulp_v]++;
        }
    }

    void unionBySize(int u, int v)
    {
        int ulp_u = find(u);
        int ulp_v = find(v);

        if (ulp_u == ulp_v)
            return;

        if (size[ulp_u] < size[ulp_v])
        {
            size[ulp_v] += size[ulp_u];
        }
        else
        {
            size[ulp_v] += size[ulp_u];
        }
    }
};

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

vector<int> createLPS(string &pat)
{
    int n = pat.size();
    vector<int> lps(n, 0);
    int len = 0, i = 1;
    while (i < n)
    {
        if (pat[i] == pat[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if (len != 0)
                len = lps[len - 1];
            else
                i++;
        }
    }

    return lps;
}
vector<int> search(string &pat, string &txt)
{
    // code here
    vector<int> lps = createLPS(pat);
    vector<int> ind;
    int i = 0, j = 0;
    int n = txt.size(), m = pat.size();
    while (i < n)
    {
        if (txt[i] == pat[j])
        {
            i++;
            j++;
        }
        else if (j == m)
        {
            ind.push_back(i - j);
            j = lps[j - 1];
        }
        else
        {
            if (j != 0)
                j = lps[j - 1];
            else
                i++;
        }
    }
    if (j == m)
    {
        ind.push_back(i - j);
    }
    return ind;
}

const int N = 1e7;
bool prime[N + 1];
void SieveOfEratosthenes()
{

    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= N; p++)
    {

        if (prime[p] == true)
        {

            for (int i = p * p; i <= N; i += p)
            {
                prime[i] = false;
            }
        }
    }
}

const int M = 1e9 + 7;
int mod_exp(int a, int b, int m)
{
    long long result = 1;
    a = a % m;

    while (b > 0)
    {
        if (b & 1)
            result = (result * a) % m;

        a = (a * a) % m;
        b >>= 1;
    }
    return result;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        if (i != n - 1)
        {
            cin >> a[i];
        }
        else
        {
            a[i] = 1;
        }
    }
    ain(i, b, n);
    sort(all(a));
    sort(all(b));

    // aout(i, a, n);
    // aout(i, b, n);
    int j = 0 , ct = 0;
    for(int i=0; i<n; i++){
        int el = b[i];
        auto lb = lower_bound(a.begin()+j, a.end() , el);
        if(lb != (a.begin() + j)){
            int ind = lb-a.begin()-1;
            if(a[ind] < el){
                j++;
            }
            else{
                ct++;
            }
        }
        else{
            ct++;
        }
    }

    cout(ct);
}

int32_t main()
{
    Ankur_Dwivedi();
    int t;
    cin >> t;
    // t = 1;
    while (t--)
        solve();
    return 0;
}