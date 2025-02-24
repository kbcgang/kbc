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
kien n,k,m,dem,f[NT + 5], a[1000000];
kien maxx,minn, vtr,ans,l,r, dp[2000][2000];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    kien health = 0;
    dp[0][0] = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] >= 0)
        {
            for (int j = 1; j <= i - 1; j++)
            {
                dp[i][0] = dp[j][0] + a[i];
                dp[i][j] = dp[j][1] + 1;
            }
        }
        else
        {
            for (int j = 1; j <= i - 1; j ++)
            {
                if (dp[j][0] + a[i] >= 0)
                {
                    dp[i][0] = dp[j][0] + a[i];
                    dp[i][1] = max(dp[i][1],dp[j][1] + 1);
                }
            }
        }
    }
}