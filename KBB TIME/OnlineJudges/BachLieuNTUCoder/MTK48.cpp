///Hãy làm Sư tử, đừng làm Nai.😅😅😅
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
///☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 100000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem,dp1[Million + 5], a[1000000];
kien maxx,minn, vtr,ans,l,r, dp[1000000];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    ans = LLONG_MIN;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        dp[i] = max(dp[i-1], a[i]);
    }
    for (int i = n; i >= 1; i--)
    {
        dp1[i] = max(dp1[i+1], a[i]);
    }
    for (int i = 2; i <= n;i++)
    {
        ans = max(ans, 2*dp[i-1] - 3*a[i] + 5*dp1[i]);
    }
    cout << ans;
}