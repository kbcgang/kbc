/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
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

struct KBB {
    kien trai, phai;
} a[2000005];

kien n, res[2000005], ans = 0, dem = 0;

JAV() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (kien i = 0; i < n; i++) {
        cin >> a[i].trai >> a[i].phai;
        if (i > 0) {
            if (a[i].trai == a[i - 1].trai) {
                dem++;
            }
        }
    }
    if (dem == n - 1) {
        cout << n;
        return 0;
    }
    sort(a, a + n, [](const KBB &a, const KBB &b) {
        if (a.trai != b.trai) {
            return a.trai < b.trai;
        } else {
            return a.phai > b.phai;
        }
    });
    for (kien i = 0; i < n; i++) {
        kien vt = lower_bound(res, res + ans, a[i].phai, greater<kien>()) - res;
        res[vt] = a[i].phai;
        if (vt == ans) {
            ans++;
        }
    }
    cout << ans;
}
