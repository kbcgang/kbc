/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n;
ll ans;
ll a[400005], x;
ll dp[400005][3];
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
    cin >> n >> x;
    // cout<<x<<"\n";
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    // for (int i = 0; i < n; i++)
    //     cout << a[i] << " ";
    // cout << "\n";
    // cout<<dp[-1][0]<<"\n";
    // cout<<a[0]*x<<"\n";
    // dp[-1][0]=dp[-1][1]=dp[-1][2]=0;
    for (int i = 1; i <= n; i++)
    {
        ll t=a[i]*x;
        // cout<<t<<" ";
        dp[i][0] = max(dp[i - 1][0] + a[i], a[i]);
        dp[i][1] = max({dp[i - 1][0] + t, dp[i - 1][1] + t, t});
        dp[i][2] = max({dp[i - 1][1] + a[i], dp[i - 1][2] + a[i], a[i]});
        ans = max({ans, dp[i][0], dp[i][1], dp[i][2]});
        // cout << dp[i][0] << " " << dp[i][1] << " " << dp[i][2]<<"\n";
    }
    cout << ans;
}
//-3 8 -2 1 -6