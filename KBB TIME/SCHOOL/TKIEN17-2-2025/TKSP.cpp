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
unordered_map<kien, kien> dem;
kien res = 0;
kien n, k;
vector<kien> a;
JAV()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> k;
    a.resize(n);
    for (kien i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    kien l = 0;
    for (kien i = 0; i < n; i++)
    {
        dem[a[i]]++;
        while (dem[a[i]] >= k)
        {
            res += (n - i);
            dem[a[l]]--;
            if (dem[a[l]] == 0)
            {
                dem.erase(a[l]);
            }
            l++;
        }
    }
    cout << res;
    return 0;
}