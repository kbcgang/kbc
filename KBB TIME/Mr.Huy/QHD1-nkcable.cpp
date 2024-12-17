///Hãy làm Sư tử, đừng làm Nai.
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
/// https://oj.vnoi.info/problem/nkcable
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem, a[1000000];
kien maxx,minn, vtr,ans,l,r, dp[1000000];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n - 1; i++)  
    {
        cin >> a[i];
    }
    dp[1] = a[1];
    for (int i = 2; i < n; i++)
    {
        dp[i] = min(dp[i-2] + a[i - 1], dp[i-1] + a[i]);
    }
    dp[n] = dp[n-2] + a[n-1];
    cout << dp[n];
}
