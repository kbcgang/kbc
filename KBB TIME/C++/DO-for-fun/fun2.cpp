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
kien a[1005], b[1005], dp[1005][1005];
int bang(kien x, kien y)
{
    if (x == y)
        return 1;
    else
        return 0;
}

JAV()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    if (n == 0)
    {
        cout << 0 << "\n";
        return 0;
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i])
        {
            ans++;
        }
    }
    if (n < 2)
    {
        cout << ans << "\n";
        return 0;
    }
    int maxx = 0;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j <= n - i; j++)
        {
            int r = j + i - 1;
            int l = 0;
            l += bang(a[r], b[j]) - bang(a[j], b[j]);
            l += bang(a[j], b[r]) - bang(a[r], b[r]);
            int mid = 0;
            if (j + 1 <= r - 1)
            {
                mid = dp[j + 1][r - 1];
            }
            dp[j][r] = l + mid;
            if (dp[j][r] > maxx)
            {
                maxx = dp[j][r];
            }
        }
    }
    cout << ans + maxx << "\n";
    return 0;
}
