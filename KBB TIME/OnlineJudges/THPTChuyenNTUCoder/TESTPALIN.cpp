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
const int MAXN = 5000;
bool dp[MAXN][MAXN];
kien n, t, l, r;
char s[MAXN];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        dp[i][i] = true;
    }
    for (int i = 2; i <= n; i++)
    {
        for (int L = 0; L <= n - i; L++)
        {
            int R = L + i - 1;
            if (s[L] == s[R])
            {
                if (i == 2)
                {
                    dp[L][R] = true;
                }
                else
                {
                    dp[L][R] = dp[L + 1][R - 1];
                }
            }
        }
    }
    cin >> t;
    while (t--)
    {
        cin >> l >> r;
        l--, r--;
        if (dp[l][r])
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
