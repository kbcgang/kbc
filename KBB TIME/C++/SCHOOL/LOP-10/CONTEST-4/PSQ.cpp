/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define MAXPS 2200005
int m, n;
kien ps[MAXPS];   
bool f[Million + 5];

JAV() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> m >> n;
    for (int i = 0; i <= Million; ++i) 
    	f[i] = true;
    f[0] = false;
    f[1] = false;
    for (int i = 2; 1LL * i * i <= Million; ++i) {
        if (f[i]) {
            for (int j = i * i; j <= Million; j += i) {
                f[j] = false;
            }
        }
    }
    int rows = m + 1;
    int cols = n + 1;
    kien tong = 1LL * rows * cols;
    if (tong > MAXPS) {
        return 0;
    }
    for (kien i = 0; i < tong; ++i) ps[i] = 0;
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            int x; cin >> x;
            int val;
            if (x >= 0 && x <= Million) {
                if (f[x]) val = 0; else val = 1;
            } else {
                val = 1;
            }
            kien idx = 1LL * i * cols + j;
            kien a = ps[1LL * (i - 1) * cols + j];
            kien b = ps[1LL * i * cols + (j - 1)];
            kien c = ps[1LL * (i - 1) * cols + (j - 1)];
            ps[idx] = val + a + b - c;
        }
    }
    int lo = 1;
    int hi = m;
    if (n < hi) hi = n;
    int best = 0;
    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        bool ok = false;
        for (int i = 1; i + mid - 1 <= m && !ok; ++i) {
            int i2 = i + mid - 1;
            for (int j = 1; j + mid - 1 <= n; ++j) {
                int j2 = j + mid - 1;
                kien sum = ps[1LL * i2 * cols + j2]
                              - ps[1LL * (i - 1) * cols + j2]
                              - ps[1LL * i2 * cols + (j - 1)]
                              + ps[1LL * (i - 1) * cols + (j - 1)];
                if (sum == 0) {
                    ok = true;
                    break;
                }
            }
        }
        if (ok) {
            best = mid;
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }
    cout << best * best << '\n';
    return 0;
}
