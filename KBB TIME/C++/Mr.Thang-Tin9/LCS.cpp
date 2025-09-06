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
int dp[3005][3005];
string x, s , res;

JAV() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int l, ll;
    cin >> l >> ll;
    cin >> s >> x;
    int n = s.size();
    int m = x.size();
    for (int i = 0; i <= n; i = i + 1) {
        dp[i][0] = 0;
    }
    for (int j = 0; j <= m; j = j + 1) {
        dp[0][j] = 0;
    }
    for (int i = 1; i <= n; i = i + 1) {
        for (int j = 1; j <= m; j = j + 1) {
            if (s[i - 1] == x[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                if (dp[i - 1][j] > dp[i][j - 1]) {
                    dp[i][j] = dp[i - 1][j];
                } else {
                    dp[i][j] = dp[i][j - 1];
                }
            }
        }
    }
    int i = n, j = m;
    while (i > 0 and j > 0) {
        if (s[i - 1] == x[j - 1]) {
            res.push_back(s[i - 1]);
            i = i - 1;
            j = j - 1;
        } else {
            if (dp[i - 1][j] >= dp[i][j - 1]) {
                i = i - 1;
            } else {
                j = j - 1;
            }
        }
    }
    reverse(res.begin(), res.end());
    cout << res.size() << '\n';
    return 0;
}
