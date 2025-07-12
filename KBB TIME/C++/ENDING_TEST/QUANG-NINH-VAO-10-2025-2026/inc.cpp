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
kien n, m;
kien a[200005], b[200005];
kien pos0A[200005], pos0B[200005];
kien fa[200005], fb[200005];

JAV() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    cin >> m;
    for (int i = 1; i <= m; i++) {
        cin >> b[i];
    }
    int dema = 0;
    int demb = 0;
    for (int i = 1; i <= n; i++) {
        if (a[i] == 0) {
            dema = dema + 1;
            pos0A[dema] = i;
        }
    }
    for (int i = 1; i <= m; i++) {
        if (b[i] == 0) {
            demb = demb + 1;
            pos0B[demb] = i;
        }
    }
    fa[0] = 0;
    for (int i = 1; i <= n; i++) {
        if (a[i] == 1) {
            fa[i] = fa[i-1] + 1;
        } else {
            fa[i] = fa[i-1];
        }
    }
    fb[0] = 0;
    for (int i = 1; i <= m; i++) {
        if (b[i] == 1) {
            fb[i] = fb[i-1] + 1;
        } else {
            fb[i] = fb[i-1];
        }
    }

    int maxx;
    if (dema < demb) {
        maxx = dema;
    } else {
        maxx = demb;
    }

    int ans = 0;
    int sum1a = fa[n];
    int sum1b = fb[m];
    int min1;
    if (sum1a < sum1b) {
        min1 = sum1a;
    } else {
        min1 = sum1b;
    }
    if (min1 > ans) {
        ans = min1;
    }
    for (int k = 1; k <= maxx; k++) {
        int posA0 = pos0A[k];
        int posB0 = pos0B[k];
        int ppa = fa[n] - fa[posA0];
        int ppb = fb[m] - fb[posB0];
        int minAfter;
        if (ppa < ppb) {
            minAfter = ppa;
        } else {
            minAfter = ppb;
        }
        int candidate = k + minAfter;
        if (candidate > ans) {
            ans = candidate;
        }
    }

    cout << ans;
    return 0;
}
