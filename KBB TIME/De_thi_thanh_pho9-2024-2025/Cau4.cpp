///Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ----
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem,f[1000000], a[1000000];
kien maxx,minn, vtr,ans,l,r, dp[1000000];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (abs(a[i]) > k)
        {
            ans++;
        }
        f[i] = f[i-1] + a[i];
    }
    int i = 1, j = n;
    while (i < j)
    {
        if (abs(f[j] - f[i-1]) > k)
        {
            ans++;
            i++;
        }
        else
        {
            i++;
        }
        if (i == n - 1)
        {
            i = 1;
            j--;
        }
    }
    cout << ans;
}