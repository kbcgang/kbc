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
kien n, k, m, dem, b[Million + 5], a[1000000];
kien maxx, minn, vtr, ans, l, r, dp[1000000];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i] >> b[i];
    }
    /// Gọi dp[i] là giá trị lớn nhất có thể có với i cân
    for (int i = 1; i <= n; i++)
    {
        for (int j = k; j >= a[i]; j--)
        {
            dp[j] = max(dp[j], dp[j - a[i]] + b[j]);
        }
    }
    cout << *max_element(dp + 1, dp + 1 + k);
}
