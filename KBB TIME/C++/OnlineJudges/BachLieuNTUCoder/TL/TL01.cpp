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
kien n, k, m, dem;
kien maxx, minn, vtr, ans, l, r;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> k >> n;
    pair<int, int> a[1005];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    sort(a + 1, a + 1 + n);
    for (int i = 1; i <= n; i++)
    {
        if (k > a[i].first)
        {
            k += a[i].second;
            dem++;
        }
    }
    if (dem == n)
        cout << "YES";
    else
    {
        cout << "NO" << "\n"
             << n - dem;
        exit(0);
    }
}