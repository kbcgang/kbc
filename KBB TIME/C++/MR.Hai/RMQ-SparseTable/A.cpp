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
kien maxx, minn, vtr, ans, l, r, lg[1000000];
kien st[100][100000];

void sparse() {
    for (int i = 1; i <= n; i++) {
        st[0][i] = a[i];
    }
    lg[1] = 0;
    for (int i = 2; i <= n; i++) {
        lg[i] = lg[i / 2] + 1;
    }
    for (int j = 1; j <= lg[n]; j++) {
        for (int i = 1; i + (1 << j) - 1 <= n; i++) {
            st[j][i] = min(st[j-1][i], st[j-1][i + (1 << (j - 1))]);
        }
    }
}

int get (int l, int r) {
    k = lg[r - l + 1];
    return min(st[k][l], st[k][r - (1 << k) + 1]);
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sparse();
    cin >> m;
    while (m--) {
        cin >> l >> r;
        l++;
        r++;
        cout << get(l ,r) << "\n";
    }
    
}
