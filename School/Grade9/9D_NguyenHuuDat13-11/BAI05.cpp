/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n, d, s, dem[1000005], ans;
long long a[50005];
kien()
{
    if (fopen("BAI05.inp", "r"))
    {
        freopen("BAI05.inp", "r", stdin);
        freopen("BAI05.out", "w", stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> d >> n;
    dem[0] = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s = (s + (a[i] % d)) % d;
        if (s == 0)
            ans += dem[0];
        else
            ans += dem[s];
        dem[s]++;
    }
    cout<<ans;
}