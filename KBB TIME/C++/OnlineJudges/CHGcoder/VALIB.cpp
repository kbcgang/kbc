/// Hãy làm Sư tử, đừng làm Nai.
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
kien n, k, m, dem;
kien maxx, minn, vtr, ans, l, r, dp[1000000][2];

struct KBB
{
    kien weight, value;
    float have;
};
KBB a[Million];

bool cmp(KBB x, KBB y)
{
    return x.have > y.have;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].weight >> a[i].value;  /// Ta quy ước lại a[i] là giá trị còn b[i] là trọng lượng
        a[i].have = 1.0 * a[i].value / a[i].weight;
    }
    sort (a + 1, a + 1 + n, cmp);
    for (int i = 1; i <= n; i++)
    {
        while (k >= a[i].weight)
        {
            k -= a[i].weight;
            ans += a[i].value;
        }
    }
    cout << ans;
}
