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
int a[305][305], m , n;
bool f[Million + 5];

JAV() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    for (int x = 0; x <= Million; x++) {
        f[x] = true;
    }
    f[0] = false;
    f[1] = false;
    for (int p = 2; p * p <= Million; p++) {
        if (f[p]) {
            for (int q = p * p; q <= Million; q += p) {
                f[q] = false;
            }
        }
    }
    cin >> m >> n;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    kien ans = 0;
    for (int i1 = 1; i1 <= m; i1++) {
        for (int i2 = i1 + 1; i2 <= m; i2++) {
            int c0 = 0, c1 = 0, c2 = 0;
            for (int j = 1; j <= n; j++) {
                int dem = 0;
                if (f[a[i1][j]]) dem++;
                if (f[a[i2][j]]) dem++;
                if (dem == 0) {
                    c0++;
                } else if (dem == 1) {
                    c1++;
                } else {
                    c2++;
                }
            }
            ans += (kien)c2 * c1;
            // (2,2):
            ans += (kien)c2 * (c2 - 1) / 2;
        }
    }

    cout << ans << "\n";
    return 0;
}
