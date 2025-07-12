#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define JAV main
kien n, k, a[Million], l , r, dp[Million];

JAV() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];    
        dp[i] = dp[i-1];
        if (a[i] % 2 == 0) {
            dp[i]++;
        }
    }
    for (int i = 1; i <= k; i++) {
        cin >> l >> r;
        cout << dp[r] - dp[l - 1] << " ";
    }
}

