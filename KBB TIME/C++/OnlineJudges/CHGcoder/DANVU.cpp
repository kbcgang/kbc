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

kien n, m, a[Million + 5], b[Million + 5];

JAV() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= m; i++) cin >> b[i];

    sort(a + 1, a + n + 1); // nam
    sort(b + 1, b + m + 1); // nữ

    int i = 1, j = 1, ans = 0;

    while (i <= n && j <= m) {
        if (a[i] > b[j]) {
            // nam cao hơn nữ => ghép được
            ans++;
            i++;
            j++;
        } else {
            // nam không đủ cao => thử nam cao hơn
            i++;
        }
    }

    cout << ans;
    return 0;
}

