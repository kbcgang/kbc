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
kien dp[5000][5000];
int n, dem, l , r, q;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    n = s.size();
    for (int i = 0; i < n; i++)
    {
        dp[i][i] = 1;
        if (i + 1 < n and s[i] == s[i + 1])
        {
            dp[i][i + 1] = 1;
        }
    }
    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j + i - 1 < n; j++)
        {
            dem = j + i - 1;
            if (s[j] == s[dem] and dp[j + 1][dem - 1] == 1)
            {
                dp[j][dem] = 1;
            }
        }
    }

    cin >> q;
    while (q--)
    {
        l, r;
        cin >> l >> r;
        l--;
        r--;
        if (dp[l][r] == 1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}
