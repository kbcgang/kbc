/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n;
long a[1000005], k, h;
long long t, ans, s[1000005];
kien()
{
    if (fopen("VLN.inp", "r"))
    {
        freopen("VLN.inp", "r", stdin);
        freopen("VLN.out", "w", stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k >> h;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s[i] = s[i - 1] + a[i];
    }
    long long trees = 2 * h / k + 1;
    if (trees > n)
    {
        for (int i = 0; i < n; i++)
            ans += a[i];
        cout << ans;
        exit(0);
    }
    for(int i=trees-1;i<n;i++)
    {
        ans=max(ans,s[i]-s[i-trees]);
    }
    cout << ans;
}