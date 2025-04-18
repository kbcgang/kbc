///Hãy làm Sư tử, đừng làm Nai.😅😅😅
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
///☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem;
kien maxx,minn, vtr,ans,l,r, dp[1000000];
pair <kien, kien> a[Million];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (kien i = 1; i <= n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    sort (a + 1, a + n + 1);
    // for (kien i = 1; i <= n; i++)
    // {
    //     cout << a[i].first << " " << a[i].second << endl;
    // }
    kien i = 1, j = 1;
    while (j <= n)
    {
        if (a[j].first - a[i].first <= k)
        {
            vtr += a[j].second;
            ans = max(ans, vtr);
            j++;
        }
        else if (a[j].first - a[i].first >= k)
        {
            ans = max(ans, vtr);
            vtr -= a[i].second;
            i++;
        }
    }
    cout << ans;
}