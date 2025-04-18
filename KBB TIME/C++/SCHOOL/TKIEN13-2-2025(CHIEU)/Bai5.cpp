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
kien n,k,m,dem, bitch;
kien maxx,minn, vtr,ans,l,r;
pair <int, int> a[Million];

int tknp(int x)
{
    int l = 1, r = n;
    int mid, kq = -1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid].first <= x and a[mid].second > x)
        {
            return 0;
        }
        else
        {
            if (a[mid].first >= x and a[mid - 1].second <= x)
            {
                kq = a[mid].first - x;
                r = mid - 1;
            }
            else if (a[mid - 1].second >= x)
            {
                r = mid - 1;
            }
            else if (a[mid].first <= x)
            {
                l = mid + 1;
            }
            else
            {
                l = mid + 1;
            }
        }
    }
    return kq;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    sort (a + 1, a + 1 + n);
    for (int i = 1; i <= m; i++)
    {
        cin >> bitch;
        cout << tknp(bitch) << "\n";
    }
}