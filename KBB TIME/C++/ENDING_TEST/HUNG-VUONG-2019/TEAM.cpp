/// Hãy làm sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define MOD 1000000007
kien n, case1, case2;

JAV() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    vector<pair<kien,kien>> a(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i].first >> a[i].second;  
    }
    sort(a.begin() + 1, a.begin() + n + 1,
     [](const pair<kien,kien> &x, const pair<kien,kien> &y) {
         return x.second < y.second;
     });
    vector<kien> s(n+1), minna(n+2), vtr(n+1), minn(n+1), ans(n+1);
    s[0] = 0;
    for (int i = 1; i <= n; i++) {
        s[i] = s[i-1] + a[i].second;
    }
    minna[n] = a[n].first;
    for (int i = n-1; i >= 1; --i) {
        minna[i] = min(a[i].first, minna[i+1]);
    }

    for (int i = 1; i <= n; i++) {
        vtr[i] = a[i].first - a[i].second;
        minn[i] = (i == 1 ? vtr[i] : min(minn[i-1], vtr[i]));
    }
    for (int k = 1; k <= n; k++) {
        case1 = s[k-1] + minna[k];
        case2 = LLONG_MAX;
        if (k > 1) {
            case2 = s[k] + minn[k-1];
        }
        ans[k] = min(case1, case2);
    }
    for (int k = 1; k <= n; k++) {
        cout << ans[k] << '\n';
    }
    return 0;
}
