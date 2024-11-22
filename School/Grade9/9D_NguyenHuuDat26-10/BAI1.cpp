/// Kiên is unreliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
long long n;
int t;
kien()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if (fopen("BAI1.inp", "r"))
    {
        freopen("BAI1.inp", "r", stdin);
        freopen("BAI1.out", "w", stdout);
    }
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << n / 5 + n / 3<<"\n";
    }
}