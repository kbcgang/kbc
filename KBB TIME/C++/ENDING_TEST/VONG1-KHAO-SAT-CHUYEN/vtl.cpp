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
kien n, k, m, dem, f[Million + 5];
kien maxx, minn, vtr, ans, l, r, sum[1000000];
pair <kien , kien> a[Million];

void sub3 () {
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            kien tmp = (sum[j] - sum[i - 1]) - (a[j].first - a[i].first);
            if (tmp > ans) {
                ans = tmp;
            }
        }
    }
    cout << ans;
}

void sub4() {
    const kien INF = (kien)4e18;
    kien best = INF;
    kien ans4 = 0;
    for (int r = 1; r <= n; r++) {
        best = min(best, sum[r-1] - a[r].first);
        ans4 = max(ans4, (sum[r] - a[r].first) - best);
    }
    cout << ans4;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].first >> a[i].second;
        ans = max(ans, a[i].second);
    }
    sort (a + 1, a + 1 + n);
    for (int i = 1; i <= n; i++) {
        sum[i] = sum[i- 1] + a[i].second;
    }
    sub4();
    cout << endl;
    if (n <= 5000) {
        sub3();
    }
    else {
        sub4();
    }
}

