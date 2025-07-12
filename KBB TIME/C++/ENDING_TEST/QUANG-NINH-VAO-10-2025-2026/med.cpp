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
int n, k, a[Million];
int S[Million];      
int st[4*Million];    

void build(int p, int l, int r) {
    if (l == r) {
        st[p] = S[l];
        return;
    }
    int m = (l + r) / 2;
    build(p<<1, l, m);
    build(p<<1|1, m+1, r);
    st[p] = min(st[p<<1], st[p<<1|1]);
}

int ktr(int p, int l, int r, int i, int j) {
    if (j < l || r < i) {
        return INT_MAX;
    }
    if (i <= l && r <= j) {
        return st[p];
    }
    int m = (l + r) / 2;
    int L = ktr(p<<1, l, m, i, j);
    int R = ktr(p<<1|1, m+1, r, i, j);
    return (L < R ? L : R);
}

bool can(int x) {
    S[0] = 0;
    for (int i = 1; i <= n; i++) {
        if (a[i] >= x) {
            S[i] = S[i-1] + 1;
        } else {
            S[i] = S[i-1] - 1;
        }
    }
    build(1, 0, n);
    for (int i = k; i <= n; i++) {
        int mn = ktr(1, 0, n, 0, i-k);
        if (S[i] - mn > 0) {
            return true;
        }
    }
    return false;
}

JAV() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int l = 1, r = n, ans = 1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (can(mid)) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    cout << ans;
    return 0;
}
