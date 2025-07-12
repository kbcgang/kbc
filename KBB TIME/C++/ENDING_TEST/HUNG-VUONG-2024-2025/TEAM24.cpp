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
int n;
kien a[Million + 5];
int dp[Million + 5];
kien st[Million + 5][20];

kien rmq(int L, int R) {
    if (L > R) return 0;  
    int k = dp[R - L + 1];
    kien v1 = st[L][k];
    kien v2 = st[R - (1 << k) + 1][k];
    return (v1 > v2 ? v1 : v2);
}

JAV() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        st[i][0] = a[i];
    }
    dp[1] = 0;
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i/2] + 1;
    }
    for (int j = 1; (1 << j) <= n; j++) {
        for (int i = 1; i + (1 << j) - 1 <= n; i++) {
            st[i][j] = max(st[i][j-1], st[i + (1 << (j-1))][j-1]);
        }
    }
    kien ans = 0;
    for (int i = 1; i < n; i++) {
        int l = i + 1, r = n, kq = i;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (rmq(i+1, mid-1) < a[i]) {
                kq = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        ans += (kq - i);
        for (int j = kq + 1; j <= n; j++) {
            if (a[j] > a[i] and rmq(i+1, j-1) < a[j]) {
                ans++;
            }
        }
    }
    cout << ans << "\n";
    return 0;
}
