///Hãy làm Sư tử, đừng làm Nai.
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000000
kien n,k,m,dem, a[1000000];
kien maxx,minn, vtr,ans,l,r, dp[1000000];

bool ktr(kien mid)
{
    kien dem = 0;
    while (mid > 0)
    {
        mid /= 5;
        dem++;
    }
    return dem >= n;
}

int tknp(kien n)
{
    int l = 1, r = 5*n;
    int kq = -1, mid;
    while (l <= r)
    {
        mid = (l + (r - l)) / 2;
        if (ktr(mid))
        {
            r = mid;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << l << "\n";
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    kien t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        tknp(n);
    }
}