/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
long n, m;
long long ans;
void check(long m)
{
    long long ans = 0;
    int i = 1;
    while (m--)
    {
        ans += i;
        if (m - 1 >= 0)
        {
            m--;
            ans += n - i + 1;
        }
        i++;
    }
    cout << ans << "\n";
}
kien()
{
    if (fopen("Cau1b.inp", "r"))
    {
        freopen("Cau1b.inp", "r", stdin);
        freopen("Cau1b.out", "w", stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    // check(m);
    ans += 1ll * (1 + n) * (m / 2);
    if (m % 2 == 1)
    {
        ans += (m + 1) / 2;
    }
    cout << ans;
}