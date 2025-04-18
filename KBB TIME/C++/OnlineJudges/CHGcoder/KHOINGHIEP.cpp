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
kien n, k, m, dem, vtr[Million + 5], forbid[Million + 5];
kien maxx, company, ans, l, r, money, minn[1000000];
pair<kien, kien> a[Million];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    sort(a + 1, a + 1 + n);
    minn[n + 1] = INT_MAX;
    for (int i = n; i >= 1; i--)
    {
        if (minn[i + 1] > a[i].second)
        {
            minn[i] = a[i].second;
            vtr[i] = i;
        }
        else
        {
            minn[i] = minn[i + 1];
            vtr[i] = vtr[i + 1];
        }
    }
    int i = 1;
    while (company <= n)
    {
        if (forbid[i] == 1)
        {
            i++;
        }
        if (company >= a[i].first)
        {
            company++;
            i++;
        }
        else
        {
            money += minn[i];
            forbid[vtr[i]] = 1;
            company++;
        }
    }
    cout << money;
}