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

JAV() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    kien L, R, k;
    cin >> L >> R >> k;
    kien n = R - L + 1;
    kien sum;
    if (n % 2 == 0)
        sum = (n/2) * (L + R);
    else
        sum = n * ((L + R)/2);
    kien a = (L + k - 1) / k;
    kien b = R / k;
    kien ans = 0;
    if (a <= b) {
        kien cnt   = b - a + 1;
        kien first = a * k;
        kien last  = b * k;
        if (cnt % 2 == 0)
            ans = (cnt/2) * (first + last);
        else
            ans = cnt * ((first + last)/2);
    }

    cout << (sum - ans) << "\n";
    return 0;
}
