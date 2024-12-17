///Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ----
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem,f[1000000], a[1000000];
kien maxx,minn, vtr[Million],ans,l,r, dp[1000000];

int tongcs(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> l >> r;
    for (int i = l; i <= r; i++)
    {
        k= tongcs(i);
        f[k]++;
        if (f[k] == 1)
        {
            vtr[k] = i;
        }
        if (f[k] > 1)
        {
            ans = max(ans, i - vtr[k]);
        }
    }
    cout << ans;
}