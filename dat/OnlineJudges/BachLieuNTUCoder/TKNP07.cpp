/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n, k;
long r, l, ans;
long a[15005];
void zxy()
{
    // long Max=r;
    while (l <= r)
    {
        long m = (l + r) / 2;
        int box = 0;
        long s = 0;
        for (int i = 0; i < n; i++)
        {
            if (s + a[i] > m)
            {
                box++;
                s = 0;
            }
            s += a[i];
        }
        if (s != 0)
            box++;
        if (box <= k)
        {
            r = m - 1;
            ans = m;
        }
        else if (box > k)
        {
            l = m + 1;
        }
    }
    cout << ans;
}
kien()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        r += a[i];
        l = max(l, a[i]);
    }
    zxy();
}