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
const int MAXP = 10005;
kien pp[MAXP], ans;

JAV() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, P;
    cin >> n >> P;
    string s;
    cin >> s;
    if (P == 2 || P == 5) {
        ans = 0;
        for (int i = 0; i < n; ++i) {
            int d = s[i] - '0';
            if (d % P == 0) ans += (i + 1);
        }
        cout << ans;
        return 0;
    }
    int inv10 = 1;
    int base = 10;
    int exp = P - 2;
    while (exp) {
        if (exp & 1) inv10 = (1LL * inv10 * base) % P;
        base = (1LL * base * base) % P;
        exp >>= 1;
    }
    int cur = 0;
    int pw = 1;
    int inv = 1;
    pp[0] = 1;
    for (int i = n - 1; i >= 0; --i) {
        int d = s[i] - '0';
        cur = (cur + 1LL * d * pw) % P;
        pw = (1LL * pw * 10) % P;
        inv = (1LL * inv * inv10) % P;
        int dem = (1LL * cur * inv) % P;
        ans += pp[dem];
        pp[dem]++;
    }
    cout << ans;
    return 0;
}

