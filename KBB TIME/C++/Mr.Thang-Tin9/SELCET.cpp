/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, k, m, dem, a[5][Million];
kien maxx, minn, vtr, ans, l, r, dp[Million][16];

kien get (kien col, kien mask) {
    kien sum = 0;
    for (int i = 0; i < 4; i++) {
        if ((mask >> i) & 1) {
            sum += a[i][col];
        }
    }
    return sum;
}

bool ktr (kien mask1, kien mask2) {
    for (int i = 0; i < 4; i++) {
        if ((mask1 >> i) & 1 and (mask2 >> i) & 1) {
            return false;
        }
    }
    return true;
}

bool valid(kien mask) {
    return (mask & (mask << 1)) == 0;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    maxx = LLONG_MIN;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
            maxx = max(maxx, a[i][j]);
        }
    }
    for (int mask = 0; mask < 16; mask++) {
        if (valid(mask))
            dp[0][mask] = get(0, mask);
        else
            dp[0][mask] = LLONG_MIN;
    }

    for (int col = 1; col < n; col++) {
        for (int mask = 0; mask < 16; mask++) {
            if (!valid(mask)) {
                dp[col][mask] = LLONG_MIN;
                continue;
            }
            dp[col][mask] = LLONG_MIN;
            long long v = get(col, mask);
            for (int pm = 0; pm < 16; pm++)
                if (ktr(mask, pm) && dp[col-1][pm] != LLONG_MIN)
                    dp[col][mask] = max(dp[col][mask], dp[col-1][pm] + v);
        }
    }
    kien ans = LLONG_MIN;
    for (int mask = 0; mask < 16; mask++)  {
        ans = max(ans, dp[n-1][mask]);
    }
    if (ans == 0) {
        cout << maxx;
    }
    else
        cout << ans;
}
    