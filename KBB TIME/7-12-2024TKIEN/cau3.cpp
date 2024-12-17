///Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ----
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,dem,f[1000000], a[1000000];
kien maxx,minn, vtr,ans,l,r, dp[1000000];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] == 1)
        {
            f[1]++;
        }
        r = int(sqrt(a[i]));
        if (r * r == a[i])
        {
            f[r]++;
        }
    }
    for (int i = 1; i <= Million; i++)
    {
        if (f[i] == 0)
        {
            cout << i * i;
            exit(0);
        }
    }
}