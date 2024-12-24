///Hãy làm Sư tử, đừng làm Nai.
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem,f[Million], a[1000000];
kien vtr[Million],ans, dp[1000000];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        f[a[i]]++;
        dp[i] = dp[i-1] + a[i];
        if (f[a[i]] == 1)
        {
            vtr[a[i]] = i;
        }
        else
        {
            ans = max(ans, dp[i] - dp[vtr[a[i]] - 1]);
        }
    }
    cout << ans;
}