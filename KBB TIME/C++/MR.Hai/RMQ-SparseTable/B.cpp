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
kien maxx[20][Million], minn[20][Million], vtr, ans, l, r, lg2[1000000];

void tableMA() {
    for (int i = 1; i <= n; i++) {
        maxx[0][i] = a[i];
        minn[0][i] = a[i];
    }
    lg2[1] = 0;
    for (int i = 2; i <= n; i++) {
        lg2[i] = lg2[i / 2] + 1;
    }
    for (int j = 1; j <= lg2[n]; j++) {
        for (int i = 1; i + (1 << j) - 1 <= n; i++) {
            maxx[j][i] = max(maxx[j - 1][i], maxx[j-1][i + (1 << (j-1))]);
            minn[j][i] = min(minn[j-1][i], minn[j-1][i + (1 << (j - 1))]);
        }
    }
}

int GetMax(int l, int r) {
    k = lg2[r - l + 1];
    return max(maxx[k][l], maxx[k][r - (1 << k) + 1]);
}

int GetMin(int l, int r) {
    k = lg2[r - l + 1];
    return min(minn[k][l], minn[k][r - (1 << k) + 1]);
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    kien q;
    cin >> n >> q;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    tableMA();
    while (q--) {
        cin >> l >> r;
        cout << GetMax(l, r) - GetMin(l, r) << "\n";
    }
    
}
