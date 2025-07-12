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
kien n, t;

JAV() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> t;
    kien b = n / 2;  
    kien du;
    if (b % 2 == 0) {
        du = b;
    } else {
        du = -(b + 1);
    }
    kien E = 0;
    if (n % 2 == 1) {
        kien k = b + 1;
        if (k % 2 == 0) {
            E = + k;  
        } else {
            E = - k;
        }
    }
    kien D = du + E;
    kien ans = t + D;
    cout << ans;
    return 0;
}
