/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000

kien n;
kien a[Million + 5];
kien dp[Million + 5];
int  cnt[Million + 5];
int  pre[Million + 5];
int  ansIdx[Million + 5];

JAV() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    dp[0]   = 0;  cnt[0] = 0;  pre[0] = -1;
    if (a[1] > 0) {
        dp[1]   = a[1];
        cnt[1]  = 1;
        pre[1]  = -1;   
    } else {
        dp[1]   = 0;
        cnt[1]  = 0;
        pre[1]  = 0;     
    }
    for (int i = 2; i <= n; i++) {
        kien takeSum = dp[i-2] + a[i];
        int  takeCnt = cnt[i-2] + 1;
        kien skipSum = dp[i-1];
        int  skipCnt = cnt[i-1];
        if (takeSum > skipSum) {
            dp[i]   = takeSum;
            cnt[i]  = takeCnt;
            pre[i]  = i-2;
        } else {
            dp[i]   = skipSum;
            cnt[i]  = skipCnt;
            pre[i]  = i-1;
        }
    }
    cout << dp[n] << " " << cnt[n] << "\n";
    int cur = n, m = 0;
    while (cur > 0) {
        if (pre[cur] == cur-2) {
            ansIdx[++m] = cur;
            cur = cur-2;
        } else {
            cur = cur-1;
        }
    }
    for (int i = m; i >= 1; i--) {
        cout << ansIdx[i] << (i==1?'\n':' ');
    }
    return 0;
}

