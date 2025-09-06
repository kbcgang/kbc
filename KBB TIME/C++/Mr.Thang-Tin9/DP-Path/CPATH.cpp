/// Hãy làm Sư tử, đừng làm Nai.	
/// Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define int long long
#define JAV main
#define Million 1000003
#define NT 10000000
#define MOD 1000000007
kien n, dp[1005], cur[1005];
char c[1005][1005];
string s;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
        	cin >> c[i][j];
        }
    }
    cin >> s;
    s = ' ' + s;
    for (int i = 0; i <= n; i++) {
    	dp[i] = cur[i] = 0;
    }
    dp[1] = 1;
    for (int sum = 3; sum <= 2*n; sum++) {
        int L = max(1LL, sum - n);
        int R = min(n, sum - 1);
        for (int i = L; i <= R; i++) {
        	cur[i] = 0;
        }
        for (int i = L; i <= R; i++) {
            int j = sum - i;
            if (c[i][j] != s[sum - 1]) continue;
            kien path = 0;
            if (i - 1 >= 1) path += dp[i-1];
            path += dp[i];
            cur[i] = path % Million;
        }
        for (int i = 0; i <= n; i++) {
        	dp[i] = 0;
        }
        for (int i = L; i <= R; i++) {
        	dp[i] = cur[i];
        }
    }
    cout << (dp[n] % Million) << '\n';
}
