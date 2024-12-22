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

void sangNT(kien n)
{
    for (int i = 2; i <= n; i++)
    {
        f[i] = 1;
    }
    for (int i = 2; i <= n; i++)
    {
        if (f[i])
        {
            for (int j = 2 * i; j <= n; j += i)
            {
                f[j] = 0;
            }
        }
    }
}

int tong(int x)
{
    int res = 0;
    while (x > 0)
    {
        res += x % 10;
        x /= 10;
    }
    return res;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sangNT(NT);
    cin >> n >> k;
    for (int i = n; i <= k; i++)
    {
        if (f[i])
        {
            if (f[tong(i)])
            {
                cout << i << " ";
            }
        }
    }
}