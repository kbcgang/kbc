///Hãy làm Sư tử, đừng làm Nai.😅😅😅
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
///☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
int n, k;
kien V, B, D;

struct KBB {
    kien x, y, z;
};
KBB a[Million];

bool cmp(const KBB &a, const KBB &b) {
    if (a.x != b.x) return a.x < b.x;
    if (a.y != b.y) return a.y < b.y;
    return a.z < b.z;
}

bool ktr(const KBB &nd) {
    if (nd.x < V) return true;
    if (nd.x > V) return false;
    if (nd.y < B) return true;
    if (nd.y > B) return false;
    if (nd.z < D) return true;
    return false;
}

JAV() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].x >> a[i].y >> a[i].z;
    }
    sort(a + 1, a + n + 1, cmp);
    while (k--) {
        cin >> V >> B >> D;
        int l = 1, r = n, pos = n + 1;
        while (l <= r) {
            int m = (l + r) / 2;
            if (ktr(a[m])) {
                l = m + 1;
            } else {
                pos = m;
                r = m - 1;
            }
        }
        cout << (n - pos + 1) << "\n";
    }

    return 0;
}
