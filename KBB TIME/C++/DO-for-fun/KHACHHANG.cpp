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
kien maxx, end, minn, vtr, ans, l, r, dp[1000000];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> l >> r;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort (a + 1, a + 1 + n);
    if (l > r) {
        for (int i = 1; i <= n; i++) {
            if (a[i] > 0 and dem == 0) {
                vtr = i;
                str = a[i];
                dem = 1;
            }
            else if (a[i] > 0) {
                dem++
            }
            if (dem == l) {
                end = a[i];
                break;
            }
        }
        for (int i = 1; i <= vtr; i++) {
            if (abs(a[i]) < ) {
                
            }
        }
    }
}
