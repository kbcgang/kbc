/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
long long s, ans;
int n, t[25];
void cakes()
{
    long long l = 0, r = 1e18;
    while (l <= r)
    {
        long long m = (l + r) / 2, cake = 0;
        for (int i = 0; i < n; i++)
            cake += 1ll * m / t[i];
        if (cake >= s)
        {
            ans = m;
            r = m - 1;
        }
        else
            l = m + 1;
    }
    cout<<ans;
}
kien()
{
    // if(fopen(".inp","r"))
    // {
    //     freopen(".inp","r",stdin);
    //     freopen(".out","w",stdout);
    // }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> s >> n;
    for (int i = 0; i < n; i++)
        cin >> t[i];
    cakes();
}