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
kien n,k,m,dem, a[100000];
kien maxx,minn, vtr,ans,l,r;

bool ktr(kien x, kien m)
{
    kien vtr = a[1];
    for (int i = 2; i <= n; i++)
    {
        if (a[i] - vtr >= x)
        {
            vtr = a[i];
            m--;
        }
    }
    if (m > 0)
    {
        return false;
    }
    return true;
}

kien tknp()
{
    kien l = 1, r = maxx - minn;
    kien mid, ans = 0;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (ktr(mid, m - 1))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return ans;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        maxx = max(a[i], maxx);
        minn = min(a[i], minn);
    }
    sort(a + 1, a + n + 1);
    cout << tknp();
}