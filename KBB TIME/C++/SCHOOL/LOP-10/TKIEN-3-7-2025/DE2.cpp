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
    kien x, z, k;
    cin >> x >> z >> k;
    kien S = 6 * x + k;
    kien w = 0;
    if (S > 0) {
        w = (z - 1) / S;  
    }
    kien r = z - w * S;
    kien cum = 0;
    for (int day = 1; day <= 6; ++day) {
        if (day == 1) {
            cum += x + k; 
        } else {
            cum += x;     
        }
        if (cum >= r) {
            cout << w * 6 + day;
            return 0;
        }
    }

    return 0;
}
