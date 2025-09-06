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
kien n, k, m, dem, sum[Million + 5], a[1000000];
kien maxx, minn, vtr, ans, l, r, dp[1000000];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort (a + 1, a + 1 + n);
    vtr = 0;
    dem = 1;
    l = 1, m = 1;
    for (int i = 1; i <= n; i++) {
        if (i - vtr <= k) {
            sum[dem] += a[i]; 
            r = i;
            if (i == n) {
                sum[dem] += a[l - 1];
                ans += abs(a[l-1] - a[i]);
            }
        }
        else {
            m = 0;
            dem++;
            sum[dem] = a[i];
            ans += a[r] - a[l];
            a[r] = sum[dem - 1];
            l = i;
            r = i;
            vtr = i - 1;
            if (i == n) {
                sum[dem] += a[l - 1];
                ans += abs(a[l-1] - a[i]);
                break;
            }
        }
        if (sum[dem - 1] <= a[i] and m == 0) {
            sum[dem] += a[l - 1];
            vtr--;
            m = 1;
        }
    }
    cout << sum[dem] << "\n" << ans;
}
