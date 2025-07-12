///Hãy làm Sư tử, đừng làm Nai.
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem, a[Million], f[Million], pre[Million];
kien maxx,minn, vtr,ans,l,r, dp[10000][10000];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        pre[i] = pre[i-1] + a[i];
    }
    for (int i = 1; i <= n; i++) {
        f[a[i]]++;
        dp[a[i]][f[a[i]]] = i;
        for (int j = 1; j <= f[a[i]]; j++) {
            ans = max(ans, pre[i] - pre[dp[a[i]][j] - 1]);
        }
    }
    cout << ans;
}

