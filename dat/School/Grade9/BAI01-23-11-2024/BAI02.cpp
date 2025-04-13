/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
long long n;
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    long long m = sqrt(n);
    if (m * m == n)
        cout << m << " " << m;
    else if (m * (m + 1) >= n)
        cout << m << " " << m + 1;
    else if ((m + 1) * (m + 1) >= n)
        cout << m + 1 << " " << m + 1;
}