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
kien a, b, n, m, ans;

JAV() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> a >> b >> n >> m;
    kien p = n / (m + 1);
    kien rem = n - p * (m + 1);
    kien mix = p * m * a + rem * b;
    kien ppa = p * m * a + rem * a;
    kien ppb = n * b;
    ans = ppb;
    if (mix < ans) {
        ans = mix;
    }
    if (ppa < ans) {
        ans = ppa;
    }
    cout << ans;
}





