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
kien n, k, m, dem, f[Million + 5], a[1000000];
kien maxx, minn, vtr, ans, l, r, dp[1000000];

struct KBB {
    kien posmin, sum;
}; KBB st[Million];

void update (int id, int l, int r, int pos, bool type) {
    if (pos < l or pos > r) {
        return;
    }
    if (l == r) {
        if (type == 0) {
            st[id] = {0, 0};
        }
        else {
            st[id] = {l, 1};
        }
        return;
    }
    int mid = (l + r) >> 1;
    update (id << 1, l, mid, pos, type);
    update (id << 1 | 1, mid + 1, r, pos, type);
    int left = st[id << 1].posmin;
    int right = st[id << 1 | 1].posmin;
    st[id].sum = st[id << 1].sum + st[id << 1 | 1].sum;
    if (a[left] <= a[right]) {
        st[id].posmin = left;
    }
    else {
        st[id].posmin = right;
    }

}

int getsum(int id, int l, int r, int u, int v) {
    if (u > r or v < l) return 0;
    if (u <= l and r <= v) {
        return st[id].sum;
    }
    int mid = (l + r) >> 1;
    return getsum(id << 1, l , mid, u , v) + getsum (id << 1 | 1, mid + 1, r , u ,v );
}

int getpos(int id, int l, int r, int u, int v) {
    if (u > r or v < l) {
        return 0;
    }
    if (u <= l and r <= v) {
        return st[id].posmin;
    }
    int mid = (l + r) >> 1;
    int left = getpos(id << 1, l , mid, u , v);
    int right = getpos (id << 1 | 1, mid + 1, r, u ,v);
    if (a[left] <= a[right]) {
        return left;
    }
    else {
        return right;
    }
}


JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        update (1, 1 , n, i, 1);
    }   
    a[0] = INT_MAX;
    for (int i = 1; i <= n; i++) {
        int l = 1, r = n;
        int mid;
        while (l < r) {
            mid = (l + r + 1) / 2;
            if (getsum(1 , 1, n, 1, mid) <= k + 1) {
                l = mid;
            }
            else {
                r = mid - 1;
            }
        }
        int vtr = getpos (1 , 1, n, 1, l);
        cout << a[vtr] << " ";
        k -= getsum(1, 1, n, 1 ,vtr) - 1;
        update (1 ,1 ,n, vtr, 0);
    }    
}
