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
kien n, k, m, dem, a[1000000];
kien maxx, s, vtr, ans = LLONG_MAX, l, r;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int i = 1, j = 1;
    while (j <= n)
    {
        if (s + a[j] < k)
        {
            s += a[j];
            j++;
        }
        else
        {
            r = j - i + 1;
            ans = min(ans, r);
            s -= a[i];
            i++;
        }
    }
    if (ans == LLONG_MAX)
    {
        cout << -1;
        exit(0);
    }
    cout << ans;
}