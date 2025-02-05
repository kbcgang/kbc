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
kien n, k, m, dem, f[Million], f1[Million], young[Million];
kien maxx, minn, vtr, ans, l, r;
pair<int, int> a[1000000];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].first >> a[i].second;
        f[a[i].second]++;
        f1[a[i].first]++;
        if (young[a[i].second] == 0 or i < young[a[i].second])
        {
            young[a[i].second] = i; 
        }
    }
    if (f[k] >= 1)
    {
        while (f[k] > 0)
        {
            ans++;
            k = a[young[k]].first; 
            if (ans > n)
            {
                cout << -1;
                exit(0);
            }
        }
    }
    cout << ans;
}
