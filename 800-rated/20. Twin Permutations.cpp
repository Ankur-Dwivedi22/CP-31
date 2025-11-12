#include <bits/stdc++.h>
using namespace std;

// int gcd(int a,int b){
//     int min = a;
//     if(b < min) min =b;
//     for(int i=min; i>=1; i--){
//         if(a % i == 0 && b % i == 0){
//             return i;
//         }
//     }
// }

// bool prime(int n){
//     if(n == 0 || n == 1){
//         return false;
//     }
//     for(int i=2; i<=n/2; i++){
//         if(n % i == 0){
//             return false;
//         }
//     }
//     return true;
// }

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k = n + 1;
    for (int i = 0; i < n; i++)
    {
        cout << k - arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    // solve();
}