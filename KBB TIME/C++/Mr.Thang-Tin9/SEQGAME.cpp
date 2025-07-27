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
kien n, k, m, dem, a[Million + 5], b[1000000];
kien maxx, minn, vtr, ans, l, r, dp[1000000];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= m; i++) {
        cin >> b[i];
    }
    sort (a + 1, a + 1 + n);
    sort (b + 1, b + 1 + m);
    kien sum;
    while (k--) {
        cin >> sum;
        ans = INT_MAX;
        int i = 1, j = m;
        while (i <= n and j >= 1) {
            cout << a[i] << " " << b[j] << "\n";
            ans = min(ans, abs(a[i] + b[j] - sum));
            if (a[i] + b[j] > sum) {
                j--;
            }
            else  {
                i++;
            }
        }
        cout << ans << "\n";
    }
    
}
