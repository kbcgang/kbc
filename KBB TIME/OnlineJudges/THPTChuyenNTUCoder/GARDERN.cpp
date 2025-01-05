///Hãy làm Sư tử, đừng làm Nai.
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem,b[Million], a[1000000];
kien L, vtr,ans,l,r, maxx, maxx1;

bool ktr(kien mid)
{
    kien water = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] < mid)
        {
            k = (mid - a[i]) / b[i];
            if ((mid - a[i]) % b[i] == 0)
            {
                water += k;
            }
            else
            {
                water += k + 1;
            }
        }
        if (water > L)
        {
            return false;
        }
    }
    return true;
}

kien Beautifull_of_tree()
{
    kien l = 1, r = maxx*L + maxx1;
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
    cin >> n >> L;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i] >> b[i];
        maxx = max(maxx, b[i]);
        maxx1 = max(maxx1, a[i]);
    }
    Beautifull_of_tree();
}