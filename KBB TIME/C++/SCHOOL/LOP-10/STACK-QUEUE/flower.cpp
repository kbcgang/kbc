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
int a[1000005], n , k, q[Million + 5];
kien dp[1000005], head, tail, sum;

JAV() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        sum += a[i];
    }
    for (int i = 0; i < n; ++i) {
        if (i < k) {
            dp[i] = a[i];
        } else {
            while (head < tail && q[head] < i - k) {
                ++head;
            }
            dp[i] = a[i] + dp[q[head]];
        }
        while (head < tail && dp[q[tail-1]] >= dp[i]) {
            --tail;
        }
        q[tail++] = i;
    }
    kien ans = LLONG_MAX;
    for (int i = n - k; i < n; ++i) {
        if (i >= 0) ans = min(ans, dp[i]);
    }
    cout << (sum - ans) << "\n";
    return 0;
}

