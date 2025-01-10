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
kien n, k, m, f[1000000];
kien dem, tg;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    vector<pair<kien, kien>> a(n);
    for (kien i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end(), [](pair<kien, kien> &a, pair<kien, kien> &b)
         { return a.second < b.second; });

    for (kien i = 0; i < n; i++)
    {
        if (a[i].first >= tg)
        {
            dem++;
            tg = a[i].second;
        }
    }
    cout << dem << endl;

    return 0;
}
