///Hãy làm Sư tử, đừng làm Nai.😅😅😅
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
///☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m, a[1000000], dem[Million];
kien maxx = LLONG_MIN,minn, vtr,ans,l,r, dp[1000000];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (kien i = 1; i <= n; i++)
    {
        cin >> a[i];
        dem[a[i]]++;
        maxx = max(maxx, a[i]);
    }
    dp[1] = dem[1];
    for (kien i = 2; i <= maxx; i++)
    {
        dp[i] = max(dp[i-1], dem[i] * i + dp[i - 2]);
    }
    cout << dp[maxx];
}