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
    int n;
    cin>>n;
    string s;
    cin>>s;
    unordered_map<string, int> mp;
    for(int i=0; i<n; i++){
        string t = "";
        t += s[i];
        mp[t]++;
        if(i+1 < n) t += s[i+1];
        mp[t]++;
        if(i+2 < n) t += s[i+2];
        mp[t]++;
    }

    for(char c='a'; c<='z'; c++){
        string sub = "";
        sub = c;
        if(mp.find(sub) == mp.end()){
            cout(sub);
            return;
        }
    }

    for(char c1='a'; c1<='z'; c1++){
        for(char c2='a'; c2<='z'; c2++){
            string sub = "";
            sub += c1;
            sub += c2;
            if(mp.find(sub) == mp.end()){
                cout(sub);
                return;
            }
        }
    }

    for(char c1='a'; c1<='z'; c1++){
        for(char c2='a'; c2<='z'; c2++){
            for(char c3='a'; c3<='z'; c3++){
                string sub = "";
                sub += c1;
                sub += c2;
                sub += c3;
                if(mp.find(sub) == mp.end()){
                    cout(sub);
                    return;
                }
            }
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