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

void sanguoc()
{
    for (int i = 1; i <= Million; i++)
    {
        for (int j = i; j <= Million; j += i)
        {
            f[j]++;
        }
    }
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sanguoc();
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        if (f[i] <= k)
        {
            dem++;
        }
    }
    cout << dem;
}