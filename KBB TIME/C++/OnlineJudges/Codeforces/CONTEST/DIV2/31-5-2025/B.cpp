/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 998244353
const int MAXN = 100005;
kien f[MAXN];
kien p[MAXN], q[MAXN];
kien ans[MAXN], ans1[MAXN];
kien maxx[MAXN], minn[MAXN];
kien r[MAXN];
kien t, n;

JAV() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    f[0] = 1;
    for (kien i = 1; i < MAXN; i++) {
        f[i] = (f[i - 1] * 2) % MOD;
    }

    cin >> t;

    while (t--) {
        cin >> n;

        for (kien i = 0; i < n; i++) {
            cin >> p[i];
            ans[p[i]] = i;
        }

        for (kien i = 0; i < n; i++) {
            cin >> q[i];
            ans1[q[i]] = i;
        }

        maxx[0] = p[0];
        minn[0] = q[0];

        for (kien i = 1; i < n; i++) {
            if (maxx[i - 1] > p[i]) {
                maxx[i] = maxx[i - 1];
            } else {
                maxx[i] = p[i];
            }

            if (minn[i - 1] > q[i]) {
                minn[i] = minn[i - 1];
            } else {
                minn[i] = q[i];
            }
        }

        for (kien i = 0; i < n; i++) {
            kien e = maxx[i];
            if (minn[i] > e) {
                e = minn[i];
            }

            kien s;	

            if (maxx[i] > minn[i]) {
                kien j = ans[e];
                kien k = i - j;
                s = q[k];
            } else {
                if (minn[i] > maxx[i]) {
                    kien k = ans1[e];
                    kien j = i - k;
                    s = p[j];
                } else {
                    kien j1 = ans[e];
                    kien k1 = i - j1;
                    kien s1 = -1;
                    if (k1 >= 0 && k1 < n) {
                        s1 = q[k1];
                    }

                    kien k2 = ans1[e];
                    kien j2 = i - k2;
                    kien s2 = -1;
                    if (j2 >= 0 && j2 < n) {
                        s2 = p[j2];
                    }

                    if (s1 > s2) {
                        s = s1;
                    } else {
                        s = s2;
                    }
                }
            }
            r[i] = (f[e] + f[s]) % MOD;
        }
        for (kien i = 0; i < n; i++) {
            cout << r[i] << " ";
        }
        cout << '\n';
    }

    return 0;
}
