/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define MOD 1000000007
kien n;
kien h[100005];
static unordered_map<kien,int> dp[100005];

JAV() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> h[i];
        dp[i].reserve(64);
    }
    kien ans = 0;
    for (int j = 1; j <= n; j++) {
        for (int i = 1; i < j; i++) {
            kien d = h[j] - h[i]; 
            int cnt = 0;
            auto it = dp[i].find(d);
            if (it != dp[i].end()) cnt = it->second;
            ans = (ans + cnt) % MOD;
            dp[j][d] = ( (dp[j][d] + cnt) % MOD + 1 ) % MOD;
        }
    }
    cout << ans;
    return 0;
}
