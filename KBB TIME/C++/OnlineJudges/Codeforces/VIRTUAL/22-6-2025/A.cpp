/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
//// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien t;

JAV() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--) {
        kien x;
        cin >> x;
        kien L = 0;
        kien tmp = x;
        while (tmp > 0) {
            L = L + 1;
            tmp = tmp >> 1;
        }
        kien ans = 2 * L + 1;

        cout << ans << "\n";
    }

    return 0;
}
