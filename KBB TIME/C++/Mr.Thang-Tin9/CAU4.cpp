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
const int MAXN = 200000 + 5;
int n, x, y;
int a[MAXN];   
int b[MAXN];    
int sgn[MAXN];   

JAV() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> x >> y;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i] > 0) {
            sgn[i] = +1;
            b[i] = a[i];
        } else {
            sgn[i] = -1;
            b[i] = -a[i];
        }
    }

    int posCnt = 0, negCnt = 0;
    int R = 0;
    int ans = -1, bestV = -1;
    int bestDiff = MOD;
    for (int L = 1; L <= n; L++) {
        while (R < n && (posCnt < x || negCnt < y)) {
            R++;
            if (sgn[R] == +1) {
                posCnt++;
            } else {
                negCnt++;
            }
        }
        if (posCnt < x || negCnt < y) {
            break;
        }
        int u = b[L];
        int v = b[R];
        int diff = v - u;
        if (diff < bestDiff) {
            bestDiff = diff;
            ans = u;
            bestV = v;
        } else if (diff == bestDiff) {
            if (ans == -1 || u < ans) {
                ans = u;
                bestV = v;
            }
        }
        if (sgn[L] == +1) {
            posCnt--;
        } else {
            negCnt--;
        }
    }
    if (ans == -1) {
        cout << -1;
    } else {
        cout << ans << " " << bestV;
    }
    return 0;
}
