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
const int MAXN = 1000005;
const kien MOD1 = 1000000007LL;
const kien MOD2 = 1000000009LL;
const kien BASE1 = 131LL;
const kien BASE2 = 137LL;
kien pow1[MAXN], pow2[MAXN];
kien fa[MAXN], fb[MAXN];     
kien fra[MAXN], frb[MAXN];  

JAV() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    if (!(cin >> s)) return 0;
    int n = (int)s.size();
    int k;
    cin >> k;
    string rev = s;
    reverse(rev.begin(), rev.end());

    pow1[0] = 1; pow2[0] = 1;
    for (int i = 1; i <= n; ++i) {
        pow1[i] = (pow1[i-1] * BASE1) % MOD1;
        pow2[i] = (pow2[i-1] * BASE2) % MOD2;
    }

    fa[0] = 0; fb[0] = 0;
    for (int i = 0; i < n; ++i) {
        int v = (s[i] - 'a' + 1); 
        fa[i+1] = (fa[i] * BASE1 + v) % MOD1;
        fb[i+1] = (fb[i] * BASE2 + v) % MOD2;
    }

    fra[0] = 0; frb[0] = 0;
    for (int i = 0; i < n; ++i) {
        int v = (rev[i] - 'a' + 1);
        fra[i+1] = (fra[i] * BASE1 + v) % MOD1;
        frb[i+1] = (frb[i] * BASE2 + v) % MOD2;
    }
    auto xuoi = [&](int l, int r) {
        int len = r - l + 1;
        kien x1 = fa[r] - (fa[l-1] * pow1[len]) % MOD1;
        if (x1 < 0) x1 += MOD1;
        kien x2 = fb[r] - (fb[l-1] * pow2[len]) % MOD2;
        if (x2 < 0) x2 += MOD2;
        return make_pair(x1, x2);
    };

    auto dao = [&](int l_rev, int r_rev) {
        int len = r_rev - l_rev + 1;
        kien x1 = fra[r_rev] - (fra[l_rev-1] * pow1[len]) % MOD1;
        if (x1 < 0) x1 += MOD1;
        kien x2 = frb[r_rev] - (frb[l_rev-1] * pow2[len]) % MOD2;
        if (x2 < 0) x2 += MOD2;
        return make_pair(x1, x2);
    };
    for (int i = 0; i < k; ++i) {
        int l, r;
        cin >> l >> r; 
        if (l < 1) l = 1;
        if (r > n) r = n;
        if (l > r) { cout << -1 << "\n"; continue; }
        auto hf = xuoi(l, r);
        int a = n - r + 1;
        int b = n - l + 1;
        auto hr = dao(a, b);
        if (hf.first == hr.first && hf.second == hr.second) cout << 1 << "\n";
        else cout << -1 << "\n";
    }

    return 0;
}
