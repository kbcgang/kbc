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
kien n, k, m, dem, f[Million + 5], a[1000000];
kien maxx, minn, vtr, ans[Million], l, r, dp[1000000];

void sangNT()
{
    f[0] = f[1] = 1;
    for (int i = 2; i <= Million; i++)
    {
        if (f[i] == 0)
        {
            dp[i] = i;
            for (int j = i * 2; j <= Million; j += i)
            {
                f[j] = 1;
                dp[j] = i;
            }
        }
    }
}

int phantich(int x)
{
    kien res = INT_MAX;
    while (x > 1)
    {
        res = min(res, dp[x]);
        x /= dp[x];
    }
    return res;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sangNT();
    cin >> n >> k;
    for (int i = n; i <= k; i++)
    {
        ans[phantich(i)]++;
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        cout << ans[a[i]] << "\n";
    }
}