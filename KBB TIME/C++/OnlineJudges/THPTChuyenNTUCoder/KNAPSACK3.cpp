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

struct knapsack3
{
    kien w, v, a;
};
knapsack3 input[1000];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> W;
    for (kien i = 1; i <= n; i++)
    {
        cin >> input[i].w >> input[i].v >> input[i].a;
        
        for (kien j = 1; input[i].a > 0; j *= 2)
        {
            dem = min(j, input[i].a);
            input[i].a -= dem;
            weight = dem * input[i].w;
            value = dem * input[i].v;
            for (int k = W; k >= weight; k--)
            {
                dp[k] = max(dp[k], dp[k - weight] + value);
            }
        }
    }
    cout << dp[W];
}