/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, w, a[Million], b[Million], dp[NT + 5];
kien ans, maxx;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> w;
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
        maxx += b[i];
    }
    kien INF = (kien)9e18;
    for (int i = 0; i <= maxx; i++) 
        dp[i] = INF;
    dp[0] = 0;
    for (int i = 0; i < n; i++) {
        for (int v = maxx; v >= b[i]; v--) {
            if (dp[v - b[i]] != INF) {
                if (dp[v] > dp[v - b[i]] + a[i]) {
                    dp[v] = dp[v - b[i]] + a[i];
                }
            }
        }
    }
    for (int v = maxx; v >= 0; v--) {
        if (dp[v] <= w) {
            ans = v;
            break;
        }
    }
    cout << ans << '\n';
}
