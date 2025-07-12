/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 100000
#define NT 10000000
#define MOD 1000000007
kien a[Million], vtr, l , r, maxx, minn, n;
kien f1[Million+1], f2[Million+1], f3[Million+1];

JAV() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    f1[0] = f2[0] = f3[0] = 0;
    for (int i = 0; i < n; i++) {
        f1[i + 1] = (f1[i] + (a[i] % MOD) + MOD) % MOD;
        minn = (a[i] % MOD) * (a[i] % MOD) % MOD;
        f2[i + 1] = (f2[i] + minn) % MOD;
        maxx = minn * (a[i] % MOD) % MOD;
        f3[i + 1] = (f3[i] + maxx) % MOD;
    }
    kien ans = 0;
    for (int i = 0; i < n; i++) {
        int l = i + 1, r = n, k = n;
        int mid;
        while (l < r) {
            mid = (l + r) / 2;
            if (a[mid] + a[i] >= 0) {
                k = mid;
                r = mid;
            } else {
                l = mid + 1;
            }
        }
        l = i+1, r = k-1;
        if (l <= r) {
            int cnt = r - l + 1;
            kien S1 = (f1[r + 1] - f1[l] + MOD) % MOD;
            kien S2 = (f2[r + 1] - f2[l] + MOD) % MOD;
            kien S3 = (f3[r + 1] - f3[l] + MOD) % MOD;
            kien x = (a[i] % MOD + MOD) % MOD;
            kien tmp = 0;
            tmp = (tmp + cnt * ((x * x % MOD ) * x % MOD) % MOD) % MOD;
            tmp = (tmp + 3 * ((x * x % MOD) * S1 % MOD) % MOD) % MOD;
            tmp = (tmp + 3 * (x * S2 % MOD) % MOD) % MOD;
            tmp = (tmp + S3) % MOD;
            ans = (ans - tmp + MOD) % MOD;
        }
        l = k; r = n-1;
        if (l <= r) {
            int cnt = r - l + 1;
            kien S1 = (f1[r + 1] - f1[l] + MOD) % MOD;
            kien S2 = (f2[r + 1] - f2[l] + MOD) % MOD;
            kien S3 = (f3[r + 1] - f3[l] + MOD) % MOD;
            kien x = (a[i] % MOD + MOD) % MOD;
            kien tmp = 0;
            tmp = (tmp + cnt * ((x * x % MOD) * x % MOD) % MOD) % MOD;
            tmp = (tmp + 3 * ((x * x % MOD) * S1 % MOD) % MOD) % MOD;
            tmp = (tmp + 3 * (x * S2 % MOD) % MOD) % MOD;
            tmp = (tmp + S3) % MOD;
            ans = (ans + tmp) % MOD;
        }
    }
    cout << ans;
}
