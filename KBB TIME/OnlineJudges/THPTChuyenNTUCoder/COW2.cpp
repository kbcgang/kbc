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
kien n,k,m,dem,f[NT + 5], a[1000000];
kien maxx,minn,ans,l,r, dp[1000000];

bool ktr(kien mid)
{
    kien vtr = a[1], cow = 1;
    for (int i = 2; i <= n; i++)
    {
        if (a[i] - vtr >= mid)
        {
            vtr = a[i];
            cow++;
        }
    }
    if (cow >= k)
    {
        return true;
    }
    else
    {
        return false;
    }
}

kien tknp()
{
    kien l = 1, r = *max_element(a + 1, a + 1 + n);
    kien mid, kq = -1;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (ktr(mid))
        {
            kq = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << kq;
}

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
    sort (a + 1, a + 1 + n);
    tknp();
}