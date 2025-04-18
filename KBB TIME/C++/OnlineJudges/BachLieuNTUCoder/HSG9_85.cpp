/// Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ----
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, x, y, z, ans, a[1000000];
kien dp[1000000], dp1[1000000];

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
    cin >> x >> y >> z;
    dp[0] = INT_MIN;
    dp1[n + 1] = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        dp[i] = max(dp[i - 1], x * a[i]);
    }
    for (int i = n; i >= 1; i--)
    {
        dp1[i] = max(dp1[i + 1], z * a[i]);
    }
    ans = INT_MIN;
    for (int j = 2; j <= n - 1; j++)
    {
        ans = max(ans, dp[j - 1] + y * a[j] + dp1[j + 1]);
    }
    cout << ans;
}
    