/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
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
kien maxx, minn, vtr, l, r, dp[1000000];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s,x, ans;
    cin >> s;
    for (int i = s.size() - 1; i >= 0; i--)
    {
    	if (s[i] >= 'a' and s[i] <= 'z')
        {
            x += s[i];
        }
        if (s[i] >= '0' and s[i] <= '9')
        {
            f[i] = s[i] - 48 + 1;
        }
    }
    for (int i = 0; i < x.size(); i++)
    {
        if (f[i] > 0)
        {
            ans += char(f[i] - 1);
        }
    }
}