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
kien t, n, q, a[Million + 5];

JAV() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--) {
        cin >> n >> q;
        for (int i = 1; i <= n; ++i)
            cin >> a[i];
        vector<int> le(n + q + 10, 0), ri(n + q + 10, 0);
        vector<int> pp(n + 5);
        iota(pp.begin(), pp.begin() + n + 1, 0);  
        vector<array<int, 3>> dp(q + 1);
        for (int idx = 1; idx <= q; ++idx) {
            int u, v, w;
            cin >> u >> v >> w;
            dp[idx] = {u, v, w};
            int nutMoi = n + idx;
            le[nutMoi] = pp[u];
            ri[nutMoi] = pp[v];
            pp[w] = nutMoi;
        }
        vector<kien> vtri(n + q + 10, 0);
        vector<bool> tknp(n + q + 10, 0), ktr(n + q + 10, 0);
        for (int i = 1; i <= n; ++i)
            ktr[pp[i]] = true;
        for (int i = 1; i <= n; ++i) {
            int dinh = pp[i];
            if (!tknp[dinh]) {
                vtri[dinh] = a[i];
                tknp[dinh] = true;
            }
        }
        bool hopLe = true;
        for (int i = n + q; i >= 1; --i) {
            if (i > n) {
                for (int nhanh : {le[i], ri[i]}) {
                    if (vtri[nhanh] < vtri[i]) {
                        if (tknp[nhanh]) {
                            hopLe = false;
                            break;
                        }
                        vtri[nhanh] = vtri[i];
                    }
                }
                if (!hopLe) break;
            }
        }
        if (!hopLe) {
            cout << "-1\n";
            continue;
        }
        for (int i = 1; i <= n + q; ++i) {
            if (i > n) {
                kien gtTrai = vtri[le[i]];
                kien gtPhai = vtri[ri[i]];
                kien mucTieu = min(gtTrai, gtPhai);

                if (tknp[i]) {
                    if (vtri[i] != mucTieu) {
                        hopLe = false;
                        break;
                    }
                } else vtri[i] = mucTieu;
            }
        }
        if (!hopLe) {
            cout << "-1\n";
            continue;
        }
        for (int i = 1; i <= n; ++i)
            cout << vtri[i] << (i < n ? " " : "\n");
    }
    return 0;
}
