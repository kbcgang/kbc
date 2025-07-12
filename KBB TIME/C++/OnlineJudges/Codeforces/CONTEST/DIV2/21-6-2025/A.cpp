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

JAV() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        kien l[3], b[3];
        cin >> l[0] >> b[0] >> l[1] >> b[1] >> l[2] >> b[2];
        kien S = l[0]*b[0] + l[1]*b[1] + l[2]*b[2];
        kien x = sqrt(S);
        bool ok = false;
        if (x*x == S) {
            int id[3] = {0,1,2};
            do {
                int i0 = id[0], i1 = id[1], i2 = id[2];
                if (!ok) {
                    if (l[i0]==x && l[i1]==x && l[i2]==x) {
                        if (b[i0]+b[i1]+b[i2]==x) {
                            ok = true;
                        }
                    }
                }
                if (!ok) {
                    if (b[i0]==x && b[i1]==x && b[i2]==x) {
                        if (l[i0]+l[i1]+l[i2]==x) {
                            ok = true;
                        }
                    }
                }
                if (!ok) {
                    if (l[i0]==x) {
                        kien remH = x - b[i0];
                        if (remH>0) {
                            if (b[i1]==remH && b[i2]==remH) {
                                if (l[i1]+l[i2]==x) {
                                    ok = true;
                                }
                            }
                        }
                    }
                }
                if (!ok) {
                    if (b[i0]==x) {
                        kien remW = x - l[i0];
                        if (remW>0) {
                            if (l[i1]==remW && l[i2]==remW) {
                                if (b[i1]+b[i2]==x) {
                                    ok = true;
                                }
                            }
                        }
                    }
                }
            } while (!ok && next_permutation(id, id+3));
        }

        if (ok) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
