/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
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
kien n, a[1000000], ans;
kien maxx;

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
    vector<int> pp(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        pp[a[i]] = i;
    }
    int maxx = 0;
    ans = 0;
    for (int i = 1; i <= n; i++)
    {
        maxx = max(maxx, pp[i]);
        if (i == maxx)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
