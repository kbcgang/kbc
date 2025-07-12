/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, k, a[1005], dp[1005];

JAV()
{
    cin >> n >> k;
    for (kien i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    for (kien i = 0; i <= n; i++)
    {
        dp[i] = -INT_MAX;
    }
    dp[0] = 0;

    for (kien i = 1; i <= n; i++)
    {
        kien ktr = max(0LL, i - k);
        kien maxx = -INT_MAX;
        for (kien j = ktr; j < i; j++)
        {
            if (dp[j] > maxx)
            {
                maxx = dp[j];
            }
        }
        dp[i] = a[i] + maxx;
    }

    kien ans = -INT_MAX;
    for (kien i = 0; i <= n; i++)
    {
        if (dp[i] > ans)
        {
            ans = dp[i];
        }
    }

    cout << ans << endl;
}
