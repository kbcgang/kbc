/// Hãy làm sư tử, đừng làm Nai.😅😅😅
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
kien s[Million+5], x, k;
kien pp[Million+5], n ,q, p, dem;

JAV() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> p >> q;
    s[0] = 0;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        s[i] = s[i-1] + x;
    }
    kien l = 0, r = 0;
    kien ans = LLONG_MIN;
    for (int j = 1; j <= n; j++) {
        k = j - p;
        if (k >= 0) {
            while (l < r and s[ pp[r-1] ] >= s[k]) {
                r--;
            }
            pp[r++] = k;
        }
        kien cuoi = j - q;
        while (l < r and pp[l] < cuoi) {
            l++;
        }
        if (l < r) {
            dem = s[j] - s[ pp[l] ];
            if (dem > ans) {
                ans = dem;
            }
        }
    }

    cout << ans << "\n";
    return 0;
}
