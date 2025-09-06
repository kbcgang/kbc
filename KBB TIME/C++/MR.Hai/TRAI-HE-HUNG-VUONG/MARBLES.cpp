/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
int n, up[Million + 5], down[Million + 5];
kien a[Million + 5], lv, rv;
int bit[Million + 5], b;

void update(int i, int delta) {
    while (i <= n) {
        bit[i] += delta;
        i += i & -i;
    }
}

int get(int i) {
    int s = 0;
    while (i > 0) {
        s += bit[i];
        i -= i & -i;
    }
    return s;
}

int ktr(int k) {
    int pos = 0;
    for (int pw = 1 << 18; pw > 0; pw >>= 1) {
        if (pos + pw <= n) {
            if (bit[pos + pw] < k) {
                k -= bit[pos + pw];
                pos += pw;
            }
        }
    }
    return pos + 1;
}

JAV() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i = i + 1) {
        cin >> a[i];
        up[i] = i + 1;
        down[i] = i - 1;
        bit[i]  = 0;
    }
    up[n] = 0;
    down[1] = 0;
    for (int i = 1; i <= n; i = i + 1) {
        update(i, 1);
    }
    kien ans = 0;
    for (int i = 1; i <= n - 2; i = i + 1) {
        cin >> b;
        int x = ktr(b);
        int L = down[x];
        int R = up[x];
        if (L != 0) {
            lv = a[L];
        } else {
            lv = 0;
        }
        if (R != 0) {
            rv = a[R];
        } else {
            rv = 0;
        }
        ans = ans + a[x] * (lv + rv);
        update(x, -1);
        if (L != 0) {
            up[L] = R;
        }
        if (R != 0) {
            down[R] = L;
        }
    }
    cout << ans;
}

