#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define f(i, a, b) for (int i = a; i < b; i++)
#define rf(i, a, b) for (int i = a; i >= b; i--)
#define all(v) (v.begin(), v.end())

void solve()
{
    char ch[10][10];
    int pt = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cin >> ch[i][j];
            if (((j >= 4 && j <= 5) && (i >= 4 && i <= 5)) && ch[i][j] == 'X')
            {
                pt = pt + 5;
            }
            else if (((j >= 3 && j <= 6) && (i >= 3 && i <= 6)) && ch[i][j] == 'X')
            {
                pt = pt + 4;
            }
            else if (((j >= 2 && j <= 7) && (i >= 2 && i <= 7)) && ch[i][j] == 'X')
            {
                pt = pt + 3;
            }
            else if (((j >= 1 && j <= 8) && (i >= 1 && i <= 8)) && ch[i][j] == 'X')
            {
                pt = pt + 2;
            }
            else if (((i == 0 || i == 9) || (j == 0 || j == 9)) && ch[i][j] == 'X')
            {
                pt = pt + 1;
            }
        }
    }
    cout << pt << endl;
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