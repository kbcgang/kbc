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
kien ans, l, r, dp[1000000];
string s;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    cin >> s;
    dp[0] = 1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a')
        {
            f[i] = f[i-1] + 1;
        }
        else {
            f[i] = f[i-1] - 1;
        }
        ans += dp[f[i]];
        dp[f[i]]++;
    }
    cout << ans;
}
