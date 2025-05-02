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
const kien INF = LLONG_MIN;  
kien n, a[1000000];
kien f[1000000], dp[1000000];
kien ans = INF;  

JAV() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++) 
    {
        cin >> a[i];
    }
    f[0] = dp[n + 1] = INF;  
    for (int i = 1; i <= n; i++) 
    {
        f[i] = max(f[i-1], a[i]);
    }
    for (int i = n; i >= 1; i--) 
    {
        dp[i] = max(dp[i+1], a[i]);
    }
    for (int i = 1; i <= n; i++) 
    {
        ans = max(ans, f[i] - a[i] + dp[i]);
    }
    cout << ans << '\n';
}
    