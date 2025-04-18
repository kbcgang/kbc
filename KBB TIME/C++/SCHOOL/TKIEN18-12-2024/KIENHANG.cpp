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
kien n,k,m,dem,f[NT + 5], a[1000000];
kien maxx,minn, vtr,ans,l,r, dp[1000000];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        f[i] = f[i-1] + a[i];
        if (f[i] >= m and vtr == 0)
        {
            vtr = i - 1;
            if (vtr >= k)
            {
                ans = 1;
            }
        }
    }
    if (ans == 1)
    {
        cout << 0;
        exit(0);
    }
    kien mac_dinh = a[k];
    sort (a + 1, a + 1 + vtr, greater<kien>());
    for (int i = 1; i <= vtr; i++)
    {
        ans += a[i];
        if (ans >= mac_dinh)
        {
            cout << i;
            break;
        }
    }
}