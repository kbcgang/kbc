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
kien n,k,m,dem, a[1000000];
kien maxx,minn, vtr,ans,l,r, dp[1000000];
// nung
//sech

int tknp(int x, int vtr)
{
    int l = 1, r = vtr - 1, kq = 0;
    int mid = 0;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (a[mid] > x)
        {
            kq = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return kq;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort (a + 1, a + n + 1);
    for (int i = 2; i <= n; i++)
    {
        dem = tknp(a[i] / 2, i);
        if (dem == 0)
        {
            dem = 1;
        }
        ans = max(ans, a[i] % a[dem]);
    }
    cout << ans;
}