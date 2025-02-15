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
kien n, ans = INT_MAX, m;
unordered_map<kien, kien> dem;

kien pt(kien n, kien a)
{
    kien dem = 0;
    while (n > 0)
    {
        dem += n / a;
        n /= a;
    }
    return dem;
}
JAV()
{
    cin >> n >> m;
    for (kien i = 2; i <= sqrt(m); i++)
        while (m % i == 0)
        {
            dem[i]++;
            m /= i;
        }
    if (m > 1)
        dem[m]++;
    for (auto &x : dem)
    {
        ans = min(ans, pt(n, x.first) / x.second);
    }
    cout << ans;
}