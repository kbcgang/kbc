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
const int MAXN = 1000005;
const kien MOD1 = 1000000007LL;
const kien MOD2 = 1000000009LL;
const kien BASE1 = 131LL;
const kien BASE2 = 137LL;
kien pow1[MAXN], pow2[MAXN];
kien fa[MAXN], fb[MAXN];

JAV() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string A, B;
    cin >> A >> B;
    int n = (int)A.size();
    int m = (int)B.size();
    if (m > n) {
        cout << "\n";
        return 0;
    }
    pow1[0] = 1;
    pow2[0] = 1;
    for (int i = 1; i <= n; ++i) {
        pow1[i] = (pow1[i-1] * BASE1) % MOD1;
        pow2[i] = (pow2[i-1] * BASE2) % MOD2;
    }
    fa[0] = 0;
    fb[0] = 0;
    for (int i = 0; i < n; ++i) {
        kien v = (kien)(A[i] - 'a' + 1);
        fa[i+1] = (fa[i] * BASE1 + v) % MOD1;
        fb[i+1] = (fb[i] * BASE2 + v) % MOD2;
    }
    kien pat1 = 0, pat2 = 0;
    for (int i = 0; i < m; ++i) {
        kien v = (kien)(B[i] - 'a' + 1);
        pat1 = (pat1 * BASE1 + v) % MOD1;
        pat2 = (pat2 * BASE2 + v) % MOD2;
    }
    bool check = false;
    for (int i = 0; i + m <= n; ++i) {
        kien x1 = fa[i+m] - (fa[i] * pow1[m]) % MOD1;
        if (x1 < 0) x1 += MOD1;
        kien x2 = fb[i+m] - (fb[i] * pow2[m]) % MOD2;
        if (x2 < 0) x2 += MOD2;
        if (x1 == pat1 and x2 == pat2) {
            if (!check) {
                cout << (i + 1);
                check = true;
            } else {
                cout << " " << (i + 1);
            }
        }
    }

    cout << "\n";
    return 0;
}
