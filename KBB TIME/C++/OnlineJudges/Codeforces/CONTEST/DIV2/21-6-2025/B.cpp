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
kien t, n;

JAV() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--) {
        kien s;
        cin >> n >> s;
        kien dem = 0;
        for (int i = 0; i < n; i++) {
            kien dx, dy, x, y;
            cin >> dx >> dy >> x >> y;
            kien lhs = x * dx - y * dy;
            lhs %= s;
            if (lhs < 0) {
                lhs += s;
            }
            if (lhs == 0) {
                dem++;
            }
        }
        cout << dem << "\n";
    }
    return 0;
}
