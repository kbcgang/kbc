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
kien k, l, m, maxA = 0, a[105];
bool dp[1000005];

JAV(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> k >> l >> m;
    for(kien i = 1; i <= m; i++){
        cin >> a[i];
        if(a[i] > maxA) maxA = a[i];
    }

    dp[0] = false;
    for(kien i = 1; i <= maxA; i++){
        dp[i] = (i >= 1 && !dp[i-1]) || (i >= k && !dp[i-k]) || (i >= l && !dp[i-l]);
    }

    for(kien i = 1; i <= m; i++){
        cout << (dp[a[i]] ? 'A' : 'B');
    }
    return 0;
}
