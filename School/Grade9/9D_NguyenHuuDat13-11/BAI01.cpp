/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
long l, r, a, b;
kien()
{
    if (fopen("BAI01.inp", "r"))
    {
        freopen("BAI01.inp", "r", stdin);
        freopen("BAI01.out", "w", stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> l >> r >> a >> b;
    long ab = a / __gcd(a, b) * b;
    cout << r / ab - (l - 1) / ab;
}