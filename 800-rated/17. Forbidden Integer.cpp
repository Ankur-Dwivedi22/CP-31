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

void solve()
{
    int n, k, x;
    cin >> n >> k >> x;
    if(k == 1){
        coutn;
        return;
    }
    if (x != 1)
    {
        couty;
        cout(n);
        for (int i = 1; i <= n; i++)
        {
            cout << 1 << " ";
        }
        cout << "\n";
    }
    else
    {
        if (k == 2)
        {
            if (n % 2 == 0)
            {
                int m = n / 2;
                couty;
                cout(m);
                for (int i = 1; i <= m; i++)
                {
                    cout << 2 << " ";
                }
                cout << "\n";
            }
            else
            {
                coutn;
            }
        }
        else
        {
            if (n % 2 == 0)
            {
                int m = n / 2;
                couty;
                cout(m);
                for (int i = 1; i <= m; i++)
                {
                    cout << 2 << " ";
                }
                cout << "\n";
                return;
            }
            else
            {
                int m = n / 2;
                couty;
                cout(m);
                cout << 3 << " ";
                for (int i = 1; i < m; i++)
                {
                    cout << 2 << " ";
                }
                cout << "\n";
                return;
            }
            coutn;
        }
    }
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