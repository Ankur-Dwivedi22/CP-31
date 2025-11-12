#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define f(i, a, b) for (int i = a; i < b; i++)
#define rf(i, a, b) for (int i = a; i >= b; i--)

int gcd(int a, int b)
{
    int min = a;
    if (b < min)
        min = b;
    for (int i = min; i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            return i;
        }
    }
}

bool prime(int n)
{
    if (n == 0 || n == 1)
    {
        return false;
    }
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    ll a, b, c, s1 = 0, s2 = 0;
    cin >> a >> b >> c;
    if (c % 2 == 0)
        s1 = a + (c / 2);
    else
        s1 = a + (c / 2) + 1;
    s2 = b + (c / 2);
    if (s1 > s2)
        cout << "First" << endl;
    else
        cout << "Second" << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    // solve();
}