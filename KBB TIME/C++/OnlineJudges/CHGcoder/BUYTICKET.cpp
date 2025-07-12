/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, k, m, dem, f[Million + 5], a[1000000];
kien maxx, minn, vtr, ans, l, r, dp[1000000];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        dp[i] = 1;
        if (a[i] > k)
            f[dem++] = i;
    }
    if (m <= n)
    {
        for (int i = 1; i <= m; i++)
            cout << 1 << " ";
        exit(0);
    }
    int i = 0;
    m -= n;
    while (m > 0)
    {
        dp[f[i]]++;
        i++;
        if (i == dem)
            i = 0;
        m--;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << dp[i] << " ";
    }
}
