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
kien  ans, l, r, dp[1000000];
string s;
JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    while (n--)
    {
        cin >> s;
        dem = 1;
        for (int j = 0; j < s.size(); j++)
        {
            if (s[j] == s[j-1])
            {
                dem++;
                ans = max(ans, dem);
            }
            else {
                dem = 1;
            }
        }
    }
    cout << ans;
}
