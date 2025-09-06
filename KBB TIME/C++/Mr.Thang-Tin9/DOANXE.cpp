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
kien w[1005], n, sum, minn, v[1005], f[1005];
kien P, l;
double dp[1005];

JAV()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    cin >> P >> l;
    for (int i = 1; i <= n; ++i) {
        cin >> w[i] >> v[i];
        f[i] = f[i-1] + w[i];
    }
    for (int i = 0; i <= n; ++i) {
    	dp[i] = MOD;
    }
    dp[0] = 0.0;
    for (int i = 1; i <= n; ++i) {
        sum = 0;
        minn = INT_MAX;
        for (int j = i; j >= 1; --j) {
            sum += w[j];
            if (sum > P) {
            	break;         
            }
            if (v[j] < minn) {
            	minn = v[j];
            }
            double time = (double) l / (double) minn;
            if (dp[j-1] + time < dp[i]) {
            	dp[i] = dp[j-1] + time;
            }
        }
    }
    cout << fixed << setprecision(2) << dp[n] << '\n';
}
