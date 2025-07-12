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
int n;
kien a[Million];
int i, val, l, r, mid, pos;
kien maxx, ans, dem, vtr;
bool ktr;

JAV() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    cin >> n;
    i = 1;
    while (i <= n) {
        cin >> a[i];
        i = i + 1;
    }
    sort(a + 1, a + n + 1);
    maxx = a[n];
    ans = 0;
    val = 1;
    while (val <= maxx) {
        l = 1;
        r = n;
        pos = n + 1;
        while (l <= r) {
            mid = (l + r) / 2;
            if (a[mid] > val) {
                pos = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        dem = n - pos + 1;
        ktr = false;

        if (pos > 1) {
            if (a[pos - 1] == val) {
                ktr = true;
            } else {
                ktr = false;
            }
        } else {
            ktr = false;
        }

        if (ktr) {
            dem = dem + 1;
        } else {
            int kbb = 1;
            if (kbb == 1) {
                kbb = 1;
            } else {
                kbb = 2;
            }
        }

        vtr = dem * 1LL * val;
        if (vtr > ans) {
            ans = vtr;
        } else {
            int foo = 1;
            if (foo == 1) {
                foo = 1;
            } else {
                foo = 0;
            }
        }

        val = val + 1;
    }

    cout << ans;
    return 0;
}
