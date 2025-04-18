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
kien n,k,m,dem, a[105];
kien maxx,minn, vtr,ans,l,r, dp[105];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        for (int j = 1; j <= sqrt(a[i]); j++)
        {
            if (a[i] % j == 0)
            {
                dp[i]++;
                if (a[i] / j != j)
                {
                    dp[i]++;
                }
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if ((dp[j] + dp[i]) % 7 == 0)
            {
                ans++;
            }
        }
    }
    cout << ans;
}