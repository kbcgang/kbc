/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, k, m, dem, f[Million + 5];
vector <int> a;
kien maxx, minn, vtr, ans, l, r, dp[1000000];
kien bit[100005];

void update (int i, int v) {
    while (i <= n) {
        bit[i] += v;
        i += i & -i;
    }
}

int query (int i) {
    int res = 0;
    while (i) {
        res += bit[i];
        i -= i & -i;
    }
    return res;
}

vector <int> change (const vector <int> & a) {
    vector <int> inv(n);
    fill (bit, bit + n + 1, 0);
    for (int i = n - 1; i >= 0; i--) {
        inv[i] = query(a[i] - 1);
        update (a[i], 1);
    }
    return inv;
}

vector <int> hoan (const vector <int> & inv) {
    vector <int> p(n);
    fill (bit, bit + n + 1, 0);
    for (int i = 1; i <= n; i++) {
        update (i , 1);
    }
    for (int i = 0; i < n; i++) {
        int k = inv[i] + 1, l = 1, r = n, pos = -1;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (query(mid) >= k) {
                pos = mid;
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
            p[i] = pos;
            update (pos, -1);
        }
    }
    return p;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    vector <int> a(n);
    vector <int> b(n);
    for (int &x : a) cin >> x;
    for (int &x : b) cin >> x;
    cout << 3;
    auto invans = change(a);
    auto pans = hoan(b);
    cout << 3;
    for (int x : invans) cout << x << " ";
    cout << '\n';
    for (int x : pans) cout << x << " ";
}
