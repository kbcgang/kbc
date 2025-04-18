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
kien n,k,m,dem, a[1000005];

bool ktr(kien x)
{
    kien wood = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] > x)
        {
            wood += a[i] - x;
        }
    }
    return wood >= m;
}

kien tknp()
{
    kien l = 1, r = 1000000000, ans = 0;
    kien mid = 0;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (ktr(mid) == true)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans;
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
    }
    tknp();
}