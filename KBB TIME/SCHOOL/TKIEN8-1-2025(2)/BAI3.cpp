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
kien n, k, m;
kien maxx, minn, vtr, ans, l, r, dp[1000000];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    vector<int> f(5, 0);
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        f[x]++;
    }
    ans = f[4];
    ans += f[3];
    f[1] = max(0, f[1] - f[3]);
    ans += f[2] / 2;
    f[2] %= 2;
    if (f[2] > 0)
    {
        ans++;
        f[1] = max(0, f[1] - 2);
    }
    if (f[1] > 0)
    {
        ans += (f[1] + 3) / 4;
    }
    cout << ans << "\n";
    return 0;
}
    