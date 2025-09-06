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
kien n, k, m, dem, W;
kien weight, value, vtr, ans, l, r, dp[Million];

struct kbb
{
    kien w, v, a;
};
kbb knap[1000];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> W;
    for (kien i = 1; i <= n; i++)
    {
        cin >> knap[i].w >> knap[i].v >> knap[i].a;
        for (kien j = 1; knap[i].a > 0; j *= 2)
        {
            dem = min(j, knap[i].a);
            knap[i].a -= dem;
            weight = dem * knap[i].w;
            value = dem * knap[i].v;
            for (int k = W; k >= weight; k--)
            {
                dp[k] = max(dp[k], dp[k - weight] + value);
            }
        }
    }
    cout << dp[W];
}
