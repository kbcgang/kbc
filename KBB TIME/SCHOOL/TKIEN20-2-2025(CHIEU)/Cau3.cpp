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
kien n,k,m,dem, f[Million];
kien maxx,minn, vtr,ans,l,r;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        f[i] = 1;
    }
    ans = n;
    cin >> k;
    while (k--)
    {
        cin >> l >> r;
        if (f[l] == 1 and f[r] == 0)
        {
            f[l] = 0;
            f[r] = 1;
            if (r > n and l <= n)
            {
                ans--;
            }
            if (l > n and r <= n)
            {
                ans++;
            }
        }
        else if (f[l] == 0 and f[r] == 1)
        {
            f[l] = 1;
            f[r] = 0;
            if (l <= n)
            {
                ans++;
            }
            if (r <= n)
            {
                ans--;
            }
        }
        cout << ans << "\n";
    }
}