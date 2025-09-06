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
kien maxx, minn, vtr, ans, l, r, dp[1000000];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    kien t;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        ans = 0;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        sort (a + 1, a + 1 + n);
        for (int i = n; i >= 1; i--) {
            if (a[i] > k) {
                ans++;
            }
            else {
                vtr = i;
                break;
            }
        }   
        if (ans != n) {
            for (int i = vtr; i >= 1; i--) {
                while (a[i] > k and i >= 1) {
                    ans++;
                    i--;
                }
                for (int j = vtr - 1; j >= 1; j--) {
                    a[j] *= 2;
                }
            }
        }
        cout << ans << '\n';
    }
}
