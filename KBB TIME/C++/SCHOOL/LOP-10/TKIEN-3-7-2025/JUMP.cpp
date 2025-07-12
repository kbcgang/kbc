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
int n, q, x;

JAV() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> q;
    kien *h = new kien[n+2];
    for (int i = 1; i <= n; ++i) {
        cin >> h[i];
    }
    int *pp = new int[n+2];
    int *st  = new int[n+2];
    int top = 0;
    for (int i = 1; i <= n; ++i) {
        while (top > 0 && h[i] > h[st[top-1]]) {
            pp[st[top-1]] = i;
            top = top - 1;
        }
        st[top++] = i;
    }
    while (top > 0) {
        pp[st[top-1]] = 0;
        top = top - 1;
    }
    kien *dp = new kien[n+2];
    for (int i = n; i >= 1; --i) {
        if (pp[i] == 0) {
            dp[i] = 0;
        } else {
            dp[i] = dp[pp[i]] + 1;
        }
    }
    while (q--) {
        cin >> x;
        cout << dp[x] << '\n';
    }
}
