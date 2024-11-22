/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
long n, a[100005];
int m;
long ans;
void lantern()
{
    long long l = 1,r=1e18;
    while (l <= r)
    {
        long long mid = (l + r) / 2;        /// m là thời gian
        long long robots = 0;
        for (int i = 0; i < m; i++)
            robots += (a[i] + mid - 1) / mid;   /// lấy số robot cần, mỗi con làm được 1 đơn vị
        if (robots <= n && robots > 0)      /// robot >0 vì (a[i]+mid-1)/mid có thể =0;
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    cout << ans;
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
    cin >> n >> m;
    long long time = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
        // time = max(time, 1ll * n * a[i]);
    }
    lantern();
}